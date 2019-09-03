//
// Copyright (c) 2015-2018 CNRS
// Copyright (c) 2015-2016 Wandercraft, 86 rue de Paris 91400 Orsay, France.
//

#ifndef __pinocchio_joint_revolute_hpp__
#define __pinocchio_joint_revolute_hpp__

#include "pinocchio/math/sincos.hpp"
#include "pinocchio/spatial/inertia.hpp"
#include "pinocchio/multibody/constraint.hpp"
#include "pinocchio/multibody/joint/joint-base.hpp"
#include "pinocchio/spatial/spatial-axis.hpp"
#include "pinocchio/utils/axis-label.hpp"

namespace pinocchio
{

  template<typename Scalar, int Options, int axis> struct MotionRevoluteTpl;
  
  namespace internal
  {
    template<typename Scalar, int Options, int axis>
    struct SE3GroupAction< MotionRevoluteTpl<Scalar,Options,axis> >
    {
      typedef MotionTpl<Scalar,Options> ReturnType;
    };
    
    template<typename Scalar, int Options, int axis, typename MotionDerived>
    struct MotionAlgebraAction< MotionRevoluteTpl<Scalar,Options,axis>, MotionDerived>
    {
      typedef MotionTpl<Scalar,Options> ReturnType;
    };
  }

  template<typename _Scalar, int _Options, int axis>
  struct traits< MotionRevoluteTpl<_Scalar,_Options,axis> >
  {
    typedef _Scalar Scalar;
    enum { Options = _Options };
    typedef Eigen::Matrix<Scalar,3,1,Options> Vector3;
    typedef Eigen::Matrix<Scalar,6,1,Options> Vector6;
    typedef Eigen::Matrix<Scalar,6,6,Options> Matrix6;
    typedef typename PINOCCHIO_EIGEN_REF_CONST_TYPE(Vector6) ToVectorConstReturnType;
    typedef typename PINOCCHIO_EIGEN_REF_TYPE(Vector6) ToVectorReturnType;
    typedef Vector3 AngularType;
    typedef Vector3 LinearType;
    typedef const Vector3 ConstAngularType;
    typedef const Vector3 ConstLinearType;
    typedef Matrix6 ActionMatrixType;
    typedef MotionTpl<Scalar,Options> MotionPlain;
    enum {
      LINEAR = 0,
      ANGULAR = 3
    };
  }; // traits MotionRevoluteTpl
  
  template<typename Scalar, int Options, int axis> struct TransformRevoluteTpl;
  
  template<typename _Scalar, int _Options, int _axis>
  struct traits< TransformRevoluteTpl<_Scalar,_Options,_axis> >
  {
    enum {
      axis = _axis,
      Options = _Options,
      LINEAR = 0,
      ANGULAR = 3
    };
    typedef _Scalar Scalar;
    typedef SE3Tpl<Scalar,Options> PlainType;
    typedef Eigen::Matrix<Scalar,3,1,Options> Vector3;
    typedef Eigen::Matrix<Scalar,3,3,Options> Matrix3;
    typedef Matrix3 AngularType;
    typedef Matrix3 AngularRef;
    typedef Matrix3 ConstAngularRef;
    typedef typename Vector3::ConstantReturnType LinearType;
    typedef typename Vector3::ConstantReturnType LinearRef;
    typedef const typename Vector3::ConstantReturnType ConstLinearRef;
    typedef typename traits<PlainType>::ActionMatrixType ActionMatrixType;
    typedef typename traits<PlainType>::HomogeneousMatrixType HomogeneousMatrixType;
  }; // traits TransformRevoluteTpl
  
  namespace internal
  {
    template<typename Scalar, int Options, int axis>
    struct SE3GroupAction< TransformRevoluteTpl<Scalar,Options,axis> >
    { typedef typename traits <TransformRevoluteTpl<Scalar,Options,axis> >::PlainType ReturnType; };
  }
  
  template<typename _Scalar, int _Options, int axis>
  struct TransformRevoluteTpl : SE3Base< TransformRevoluteTpl<_Scalar,_Options,axis> >
  {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    PINOCCHIO_SE3_TYPEDEF_TPL(TransformRevoluteTpl);
    typedef typename traits<TransformRevoluteTpl>::PlainType PlainType;
    
    TransformRevoluteTpl() {}
    TransformRevoluteTpl(const Scalar & sin, const Scalar & cos)
    : m_sin(sin), m_cos(cos)
    {}
    
    PlainType plain() const
    {
      PlainType res(PlainType::Identity());
      _setRotation (res.rotation());
      return res;
    }
    
    operator PlainType() const { return plain(); }
    
    template<typename S2, int O2>
    typename internal::SE3GroupAction<TransformRevoluteTpl>::ReturnType
    se3action(const SE3Tpl<S2,O2> & m) const
    {
      typedef typename internal::SE3GroupAction<TransformRevoluteTpl>::ReturnType ReturnType;
      ReturnType res;
      switch(axis)
      {
        case 0:
        {
          res.rotation().col(0) = m.rotation().col(0);
          res.rotation().col(1).noalias() = m_cos * m.rotation().col(1) + m_sin * m.rotation().col(2);
          res.rotation().col(2).noalias() = res.rotation().col(0).cross(res.rotation().col(1));
          break;
        }
        case 1:
        {
          res.rotation().col(1) = m.rotation().col(1);
          res.rotation().col(2).noalias() = m_cos * m.rotation().col(2) + m_sin * m.rotation().col(0);
          res.rotation().col(0).noalias() = res.rotation().col(1).cross(res.rotation().col(2));
          break;
        }
        case 2:
        {
          res.rotation().col(2) = m.rotation().col(2);
          res.rotation().col(0).noalias() = m_cos * m.rotation().col(0) + m_sin * m.rotation().col(1);
          res.rotation().col(1).noalias() = res.rotation().col(2).cross(res.rotation().col(0));
          break;
        }
        default:
        {
          assert(false && "must nerver happened");
          break;
        }
      }
      res.translation() = m.translation();
      return res;
    }
    
    const Scalar & sin() const { return m_sin; }
    const Scalar & cos() const { return m_cos; }
    
    template<typename OtherScalar>
    void setValues(const OtherScalar & sin, const OtherScalar & cos)
    { m_sin = sin; m_cos = cos; }

    LinearType translation() const { return LinearType::PlainObject::Zero(3); };
    AngularType rotation() const {
      AngularType m(AngularType::Identity(3));
      _setRotation (m);
      return m;
    }
    
  protected:
    
    Scalar m_sin, m_cos;
    inline void _setRotation (typename PlainType::AngularRef& rot) const
    {
      switch(axis)
      {
        case 0:
        {
          rot.coeffRef(1,1) = m_cos; rot.coeffRef(1,2) = -m_sin;
          rot.coeffRef(2,1) = m_sin; rot.coeffRef(2,2) =  m_cos;
          break;
        }
        case 1:
        {
          rot.coeffRef(0,0) =  m_cos; rot.coeffRef(0,2) = m_sin;
          rot.coeffRef(2,0) = -m_sin; rot.coeffRef(2,2) = m_cos;
          break;
        }
        case 2:
        {
          rot.coeffRef(0,0) = m_cos; rot.coeffRef(0,1) = -m_sin;
          rot.coeffRef(1,0) = m_sin; rot.coeffRef(1,1) =  m_cos;
          break;
        }
        default:
        {
          assert(false && "must nerver happened");
          break;
        }
      }
    }
  };

  template<typename _Scalar, int _Options, int axis>
  struct MotionRevoluteTpl : MotionBase< MotionRevoluteTpl<_Scalar,_Options,axis> >
  {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    
    MOTION_TYPEDEF_TPL(MotionRevoluteTpl);
    typedef SpatialAxis<axis+ANGULAR> Axis;
    typedef typename Axis::CartesianAxis3 CartesianAxis3;

    MotionRevoluteTpl() {}
    
    template<typename OtherScalar>
    MotionRevoluteTpl(const OtherScalar & w) : w(w)  {}
    
//    operator MotionPlain() const { return Axis() * w; }
    
    template<typename MotionDerived>
    void setTo(MotionDense<MotionDerived> & m) const
    {
      m.linear().setZero();
      for(Eigen::DenseIndex k = 0; k < 3; ++k)
        m.angular()[k] = k == axis ? w : (Scalar)0;
    }
    
    template<typename MotionDerived>
    void addTo(MotionDense<MotionDerived> & v) const
    {
      typedef typename MotionDense<MotionDerived>::Scalar OtherScalar;
      v.angular()[axis] += (OtherScalar)w;
    }
    
    template<typename S2, int O2, typename D2>
    void se3Action_impl(const SE3Tpl<S2,O2> & m, MotionDense<D2> & v) const
    {
      v.angular().noalias() = m.rotation().col(axis) * w;
      v.linear().noalias() = m.translation().cross(v.angular());
    }
    
    template<typename S2, int O2>
    MotionPlain se3Action_impl(const SE3Tpl<S2,O2> & m) const
    {
      MotionPlain res;
      se3Action_impl(m,res);
      return res;
    }
    
    template<typename S2, int O2, typename D2>
    void se3ActionInverse_impl(const SE3Tpl<S2,O2> & m, MotionDense<D2> & v) const
    {
      // Linear
      // TODO: use v.angular() as temporary variable
      Vector3 v3_tmp;
      CartesianAxis3::alphaCross(w,m.translation(),v3_tmp);
      v.linear().noalias() = m.rotation().transpose() * v3_tmp;
      
      // Angular
      v.angular().noalias() = m.rotation().transpose().col(axis) * w;
    }
    
    template<typename S2, int O2>
    MotionPlain se3ActionInverse_impl(const SE3Tpl<S2,O2> & m) const
    {
      MotionPlain res;
      se3ActionInverse_impl(m,res);
      return res;
    }
    
    template<typename M1, typename M2>
    EIGEN_STRONG_INLINE
    void motionAction(const MotionDense<M1> & v, MotionDense<M2> & mout) const
    {
      // Linear
      CartesianAxis3::alphaCross(-w,v.linear(),mout.linear());

      // Angular
      CartesianAxis3::alphaCross(-w,v.angular(),mout.angular());
    }
    
    template<typename M1>
    MotionPlain motionAction(const MotionDense<M1> & v) const
    {
      MotionPlain res;
      motionAction(v,res);
      return res;
    }
    
    // data
    Scalar w;
  }; // struct MotionRevoluteTpl

  template<typename S1, int O1, int axis, typename MotionDerived>
  typename MotionDerived::MotionPlain
  operator+(const MotionRevoluteTpl<S1,O1,axis> & m1,
            const MotionDense<MotionDerived> & m2)
  {
    typename MotionDerived::MotionPlain res(m2);
    res += m1;
    return res;
  }
  
  template<typename MotionDerived, typename S2, int O2, int axis>
  EIGEN_STRONG_INLINE
  typename MotionDerived::MotionPlain
  operator^(const MotionDense<MotionDerived> & m1, const MotionRevoluteTpl<S2,O2,axis>& m2)
  {
    return m2.motionAction(m1);
  }

  template<typename Scalar, int Options, int axis> struct ConstraintRevoluteTpl;
  
  namespace internal
  {
    template<typename Scalar, int Options, int axis>
    struct SE3GroupAction< ConstraintRevoluteTpl<Scalar,Options,axis> >
    { typedef Eigen::Matrix<Scalar,6,1,Options> ReturnType; };
    
    template<typename Scalar, int Options, int axis, typename MotionDerived>
    struct MotionAlgebraAction< ConstraintRevoluteTpl<Scalar,Options,axis>, MotionDerived >
    { typedef Eigen::Matrix<Scalar,6,1,Options> ReturnType; };
  }

  template<typename _Scalar, int _Options, int axis>
  struct traits< ConstraintRevoluteTpl<_Scalar,_Options,axis> >
  {
    typedef _Scalar Scalar;
    enum { Options = _Options };
    typedef Eigen::Matrix<Scalar,3,1,Options> Vector3;
    typedef Eigen::Matrix<Scalar,4,1,Options> Vector4;
    typedef Eigen::Matrix<Scalar,6,1,Options> Vector6;
    typedef Eigen::Matrix<Scalar,3,3,Options> Matrix3;
    typedef Eigen::Matrix<Scalar,4,4,Options> Matrix4;
    typedef Eigen::Matrix<Scalar,6,6,Options> Matrix6;
    typedef Matrix3 Angular_t;
    typedef Vector3 Linear_t;
    typedef const Matrix3 ConstAngular_t;
    typedef const Vector3 ConstLinear_t;
    typedef Matrix6 ActionMatrix_t;
    typedef Eigen::Quaternion<Scalar,0> Quaternion_t;
    typedef SE3Tpl<Scalar,Options> SE3;
    typedef ForceTpl<Scalar,Options> Force;
    typedef MotionTpl<Scalar,Options> Motion;
    typedef Symmetric3Tpl<Scalar,Options> Symmetric3;
    enum {
      LINEAR = 0,
      ANGULAR = 3
    };
    typedef MotionRevoluteTpl<Scalar,Options,axis> JointMotion;
    typedef Eigen::Matrix<Scalar,1,1,Options> JointForce;
    typedef Eigen::Matrix<Scalar,6,1,Options> DenseBase;
    typedef DenseBase MatrixReturnType;
    typedef const DenseBase ConstMatrixReturnType;
  }; // traits ConstraintRevoluteTpl

  template<typename _Scalar, int _Options, int axis>
  struct ConstraintRevoluteTpl
  : ConstraintBase< ConstraintRevoluteTpl<_Scalar,_Options,axis> >
  {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    
    SPATIAL_TYPEDEF_TEMPLATE(ConstraintRevoluteTpl);
    enum { NV = 1, Options = _Options };
    
    typedef typename traits<ConstraintRevoluteTpl>::JointMotion JointMotion;
    typedef typename traits<ConstraintRevoluteTpl>::JointForce JointForce;
    typedef typename traits<ConstraintRevoluteTpl>::DenseBase DenseBase;
    typedef SpatialAxis<ANGULAR+axis> Axis;

    template<typename Vector1Like>
    JointMotion __mult__(const Eigen::MatrixBase<Vector1Like> & v) const
    { return JointMotion(v[0]); }

    template<typename S1, int O1>
    Eigen::Matrix<Scalar,6,1,Options>
    se3Action(const SE3Tpl<S1,O1> & m) const
    { 
      Eigen::Matrix<Scalar,6,1,Options> res;
      res.template head<3>() = m.translation().cross(m.rotation().col(axis));
      res.template tail<3>() = m.rotation().col(axis);
      return res;
    }

    int nv_impl() const { return NV; }
    
    struct TransposeConst
    {
      const ConstraintRevoluteTpl & ref;
      TransposeConst(const ConstraintRevoluteTpl & ref) : ref(ref) {}

      template<typename Derived>
      typename ForceDense<Derived>::ConstAngularType::template ConstFixedSegmentReturnType<1>::Type
      operator* (const ForceDense<Derived> & f) const
      { return f.angular().template segment<1>(axis); }

        /// [CRBA]  MatrixBase operator* (Constraint::Transpose S, ForceSet::Block)
      template<typename D>
      typename Eigen::MatrixBase<D>::ConstRowXpr
      operator*(const Eigen::MatrixBase<D> & F) const
      {
        assert(F.rows()==6);
        return F.row(ANGULAR + axis);
      }
    }; // struct TransposeConst

    TransposeConst transpose() const { return TransposeConst(*this); }

    /* CRBA joint operators
     *   - ForceSet::Block = ForceSet
     *   - ForceSet operator* (Inertia Y,Constraint S)
     *   - MatrixBase operator* (Constraint::Transpose S, ForceSet::Block)
     *   - SE3::act(ForceSet::Block)
     */
     DenseBase matrix_impl() const
     {
       DenseBase S;
       MotionRef<DenseBase> v(S);
       v << Axis();
      return S;
    }
    
    template<typename MotionDerived>
    DenseBase motionAction(const MotionDense<MotionDerived> & m) const
    {
      DenseBase res;
      MotionRef<DenseBase> v(res);
      v = m.cross(Axis());
      return res;
    }
  }; // struct ConstraintRevoluteTpl

  template<typename _Scalar, int _Options, int _axis>
  struct JointRevoluteTpl
  {
    typedef _Scalar Scalar;
    
    enum
    {
      Options = _Options,
      axis = _axis
    };
  };

  /* [CRBA] ForceSet operator* (Inertia Y,Constraint S) */
  template<typename S1, int O1, typename S2, int O2>
  inline Eigen::Matrix<S2,6,1,O2>
  operator*(const InertiaTpl<S1,O1> & Y,const ConstraintRevoluteTpl<S2,O2,0> &)
  {
    typedef InertiaTpl<S1,O1> Inertia;
    /* Y(:,3) = ( 0,-z, y,  I00+yy+zz,  I01-xy   ,  I02-xz   ) */
    const S1
    &m = Y.mass(),
    &x = Y.lever()[0],
    &y = Y.lever()[1],
    &z = Y.lever()[2];
    const typename Inertia::Symmetric3 & I = Y.inertia();
    
    Eigen::Matrix<S2,6,1,O2> res;
    res << (S2)0,-m*z,m*y,
    I(0,0)+m*(y*y+z*z),
    I(0,1)-m*x*y,
    I(0,2)-m*x*z ;
    return res;
  }
  /* [CRBA] ForceSet operator* (Inertia Y,Constraint S) */
  template<typename S1, int O1, typename S2, int O2>
  inline Eigen::Matrix<S2,6,1,O2>
  operator*(const InertiaTpl<S1,O1> & Y,const ConstraintRevoluteTpl<S2,O2,1> &)
  {
    typedef InertiaTpl<S1,O1> Inertia;
    /* Y(:,4) = ( z, 0,-x,  I10-xy   ,  I11+xx+zz,  I12-yz   ) */
    const S1
    &m = Y.mass(),
    &x = Y.lever()[0],
    &y = Y.lever()[1],
    &z = Y.lever()[2];
    const typename Inertia::Symmetric3 & I = Y.inertia();
    Eigen::Matrix<S2,6,1,O2> res;
    res << m*z,(S2)0,-m*x,
    I(1,0)-m*x*y,
    I(1,1)+m*(x*x+z*z),
    I(1,2)-m*y*z ;
    return res;
  }
  /* [CRBA] ForceSet operator* (Inertia Y,Constraint S) */
  template<typename S1, int O1, typename S2, int O2>
  inline Eigen::Matrix<S2,6,1,O2>
  operator*(const InertiaTpl<S1,O1> & Y,const ConstraintRevoluteTpl<S2,O2,2> &)
  {
    typedef InertiaTpl<S1,O1> Inertia;
    /* Y(:,5) = (-y, x, 0,  I20-xz   ,  I21-yz   ,  I22+xx+yy) */
    const S1
    &m = Y.mass(),
    &x = Y.lever()[0],
    &y = Y.lever()[1],
    &z = Y.lever()[2];
    const typename Inertia::Symmetric3 & I = Y.inertia();
    Eigen::Matrix<S2,6,1,O2> res; res << -m*y,m*x,(S2)0,
    I(2,0)-m*x*z,
    I(2,1)-m*y*z,
    I(2,2)+m*(x*x+y*y) ;
    return res;
  }
  
  /* [ABA] I*S operator (Inertia Y,Constraint S) */
  template<typename M6Like, typename S2, int O2,int axis>
  inline const typename M6Like::ConstColXpr
  operator*(const Eigen::MatrixBase<M6Like> & Y, const ConstraintRevoluteTpl<S2,O2,axis> &)
  {
    EIGEN_STATIC_ASSERT_MATRIX_SPECIFIC_SIZE(M6Like,6,6);
    return Y.col(Inertia::ANGULAR + axis);
  }

  template<typename _Scalar, int _Options, int axis>
  struct traits< JointRevoluteTpl<_Scalar,_Options,axis> >
  {
    enum {
      NQ = 1,
      NV = 1
    };
    typedef _Scalar Scalar;
    enum { Options = _Options };
    typedef JointDataRevoluteTpl<Scalar,Options,axis> JointDataDerived;
    typedef JointModelRevoluteTpl<Scalar,Options,axis> JointModelDerived;
    typedef ConstraintRevoluteTpl<Scalar,Options,axis> Constraint_t;
    typedef TransformRevoluteTpl<Scalar,Options,axis> Transformation_t;
    typedef MotionRevoluteTpl<Scalar,Options,axis> Motion_t;
    typedef BiasZeroTpl<Scalar,Options> Bias_t;
    typedef Eigen::Matrix<Scalar,6,NV,Options> F_t;
    
    // [ABA]
    typedef Eigen::Matrix<Scalar,6,NV,Options> U_t;
    typedef Eigen::Matrix<Scalar,NV,NV,Options> D_t;
    typedef Eigen::Matrix<Scalar,6,NV,Options> UD_t;
    
    PINOCCHIO_JOINT_DATA_BASE_ACCESSOR_DEFAULT_RETURN_TYPE

    typedef Eigen::Matrix<Scalar,NQ,1,Options> ConfigVector_t;
    typedef Eigen::Matrix<Scalar,NV,1,Options> TangentVector_t;
  };

  template<typename Scalar, int Options, int axis>
  struct traits< JointDataRevoluteTpl<Scalar,Options,axis> >
  { typedef JointRevoluteTpl<Scalar,Options,axis> JointDerived; };
  
  template<typename Scalar, int Options, int axis>
  struct traits< JointModelRevoluteTpl<Scalar,Options,axis> >
  { typedef JointRevoluteTpl<Scalar,Options,axis> JointDerived; };

  template<typename _Scalar, int _Options, int axis>
  struct JointDataRevoluteTpl : public JointDataBase< JointDataRevoluteTpl<_Scalar,_Options,axis> >
  {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    typedef JointRevoluteTpl<_Scalar,_Options,axis> JointDerived;
    PINOCCHIO_JOINT_DATA_TYPEDEF_TEMPLATE;
    PINOCCHIO_JOINT_DATA_BASE_DEFAULT_ACCESSOR

    Constraint_t S;
    Transformation_t M;
    Motion_t v;
    Bias_t c;
    F_t F;

    // [ABA] specific data
    U_t U;
    D_t Dinv;
    UD_t UDinv;

    JointDataRevoluteTpl() {}

    static std::string classname() { return std::string("JointDataRevolute"); }
    std::string shortname() const { return classname(); }
    
  }; // struct JointDataRevoluteTpl
  
  template<typename NewScalar, typename Scalar, int Options, int axis>
  struct CastType< NewScalar, JointModelRevoluteTpl<Scalar,Options,axis> >
  {
    typedef JointModelRevoluteTpl<NewScalar,Options,axis> type;
  };

  template<typename _Scalar, int _Options, int axis>
  struct JointModelRevoluteTpl : public JointModelBase< JointModelRevoluteTpl<_Scalar,_Options,axis> >
  {
    EIGEN_MAKE_ALIGNED_OPERATOR_NEW
    typedef JointRevoluteTpl<_Scalar,_Options,axis> JointDerived;
    PINOCCHIO_JOINT_TYPEDEF_TEMPLATE;

    typedef JointModelBase<JointModelRevoluteTpl> Base;
    using Base::id;
    using Base::idx_q;
    using Base::idx_v;
    using Base::setIndexes;
    
    JointDataDerived createData() const { return JointDataDerived(); }
    
    template<typename ConfigVector>
    EIGEN_DONT_INLINE
    void calc(JointDataDerived & data,
              const typename Eigen::MatrixBase<ConfigVector> & qs) const
    {
      typedef typename ConfigVector::Scalar OtherScalar;
      
      const OtherScalar & q = qs[idx_q()];
      OtherScalar ca,sa; SINCOS(q,&sa,&ca);
      data.M.setValues(sa,ca);
    }

    template<typename ConfigVector, typename TangentVector>
    EIGEN_DONT_INLINE
    void calc(JointDataDerived & data,
              const typename Eigen::MatrixBase<ConfigVector> & qs,
              const typename Eigen::MatrixBase<TangentVector> & vs) const
    {
      calc(data,qs.derived());

      data.v.w = (Scalar)vs[idx_v()];
    }
    
    template<typename Matrix6Like>
    void calc_aba(JointDataDerived & data, const Eigen::MatrixBase<Matrix6Like> & I, const bool update_I) const
    {
      data.U = I.col(Inertia::ANGULAR + axis);
      data.Dinv[0] = Scalar(1)/I(Inertia::ANGULAR + axis,Inertia::ANGULAR + axis);
      data.UDinv.noalias() = data.U * data.Dinv[0];
      
      if (update_I)
        PINOCCHIO_EIGEN_CONST_CAST(Matrix6Like,I) -= data.UDinv * data.U.transpose();
    }
    
    Scalar finiteDifferenceIncrement() const
    {
      using math::sqrt;
      return 2.*sqrt(sqrt(Eigen::NumTraits<Scalar>::epsilon()));
    }

    static std::string classname()
    {
      return std::string("JointModelR") + axisLabel<axis>();
    }
    std::string shortname() const { return classname(); }
    
    /// \returns An expression of *this with the Scalar type casted to NewScalar.
    template<typename NewScalar>
    JointModelRevoluteTpl<NewScalar,Options,axis> cast() const
    {
      typedef JointModelRevoluteTpl<NewScalar,Options,axis> ReturnType;
      ReturnType res;
      res.setIndexes(id(),idx_q(),idx_v());
      return res;
    }
    
  }; // struct JointModelRevoluteTpl

  typedef JointRevoluteTpl<double,0,0> JointRX;
  typedef JointDataRevoluteTpl<double,0,0> JointDataRX;
  typedef JointModelRevoluteTpl<double,0,0> JointModelRX;

  typedef JointRevoluteTpl<double,0,1> JointRY;
  typedef JointDataRevoluteTpl<double,0,1> JointDataRY;
  typedef JointModelRevoluteTpl<double,0,1> JointModelRY;

  typedef JointRevoluteTpl<double,0,2> JointRZ;
  typedef JointDataRevoluteTpl<double,0,2> JointDataRZ;
  typedef JointModelRevoluteTpl<double,0,2> JointModelRZ;

} //namespace pinocchio

#include <boost/type_traits.hpp>

namespace boost
{
  template<typename Scalar, int Options, int axis>
  struct has_nothrow_constructor< ::pinocchio::JointModelRevoluteTpl<Scalar,Options,axis> >
  : public integral_constant<bool,true> {};
  
  template<typename Scalar, int Options, int axis>
  struct has_nothrow_copy< ::pinocchio::JointModelRevoluteTpl<Scalar,Options,axis> >
  : public integral_constant<bool,true> {};
  
  template<typename Scalar, int Options, int axis>
  struct has_nothrow_constructor< ::pinocchio::JointDataRevoluteTpl<Scalar,Options,axis> >
  : public integral_constant<bool,true> {};
  
  template<typename Scalar, int Options, int axis>
  struct has_nothrow_copy< ::pinocchio::JointDataRevoluteTpl<Scalar,Options,axis> >
  : public integral_constant<bool,true> {};
}

#endif // ifndef __pinocchio_joint_revolute_hpp__