// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef hpp_manipulation_idl__steering__methods_hh__
#define hpp_manipulation_idl__steering__methods_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_steering__methods
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_steering__methods
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_steering__methods
#endif



#ifndef hpp_manipulation_idl__gcommon_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__gcommon_hh_EXTERNAL_GUARD__
#include <hpp/corbaserver/manipulation/gcommon-idl.hh>
#endif
#ifndef hpp_manipulation_idl__common_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__common_hh_EXTERNAL_GUARD__
#include <hpp/common-idl.hh>
#endif
#ifndef hpp_manipulation_idl__constraints_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__constraints_hh_EXTERNAL_GUARD__
#include <hpp/constraints_idl/constraints-idl.hh>
#endif
#ifndef hpp_manipulation_idl__paths_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__paths_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/paths-idl.hh>
#endif
#ifndef hpp_manipulation_idl____constraints_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl____constraints_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/_constraints-idl.hh>
#endif
#ifndef hpp_manipulation_idl__steering__methods_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__steering__methods_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/steering_methods-idl.hh>
#endif



#ifdef USE_stub_in_nt_dll
# ifndef USE_core_stub_in_nt_dll
#  define USE_core_stub_in_nt_dll
# endif
# ifndef USE_dyn_stub_in_nt_dll
#  define USE_dyn_stub_in_nt_dll
# endif
#endif

#ifdef _core_attr
# error "A local CPP macro _core_attr has already been defined."
#else
# ifdef  USE_core_stub_in_nt_dll
#  define _core_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _core_attr
# endif
#endif

#ifdef _dyn_attr
# error "A local CPP macro _dyn_attr has already been defined."
#else
# ifdef  USE_dyn_stub_in_nt_dll
#  define _dyn_attr _OMNIORB_NTDLL_IMPORT
# else
#  define _dyn_attr
# endif
#endif





_CORBA_MODULE hpp

_CORBA_MODULE_BEG

  _CORBA_MODULE constraints_idl

  _CORBA_MODULE_BEG

#ifndef __hpp_mconstraints__idl_mImplicit__
#define __hpp_mconstraints__idl_mImplicit__

    class Implicit;
    class _objref_Implicit;
    class _impl_Implicit;
    
    typedef _objref_Implicit* Implicit_ptr;
    typedef Implicit_ptr ImplicitRef;

    class Implicit_Helper {
    public:
      typedef Implicit_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_Implicit, Implicit_Helper> Implicit_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_Implicit,Implicit_Helper > Implicit_out;

#endif

  _CORBA_MODULE_END

  _CORBA_MODULE core_idl

  _CORBA_MODULE_BEG

#ifndef __hpp_mcore__idl_mSteeringMethod__
#define __hpp_mcore__idl_mSteeringMethod__

    class SteeringMethod;
    class _objref_SteeringMethod;
    class _impl_SteeringMethod;
    
    typedef _objref_SteeringMethod* SteeringMethod_ptr;
    typedef SteeringMethod_ptr SteeringMethodRef;

    class SteeringMethod_Helper {
    public:
      typedef SteeringMethod_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_SteeringMethod, SteeringMethod_Helper> SteeringMethod_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_SteeringMethod,SteeringMethod_Helper > SteeringMethod_out;

#endif

#ifndef __hpp_mcore__idl_mPath__
#define __hpp_mcore__idl_mPath__

    class Path;
    class _objref_Path;
    class _impl_Path;
    
    typedef _objref_Path* Path_ptr;
    typedef Path_ptr PathRef;

    class Path_Helper {
    public:
      typedef Path_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_Path, Path_Helper> Path_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_Path,Path_Helper > Path_out;

#endif

  _CORBA_MODULE_END

  _CORBA_MODULE manipulation_idl

  _CORBA_MODULE_BEG

    _CORBA_MODULE steeringMethod

    _CORBA_MODULE_BEG

#ifndef __hpp_mmanipulation__idl_msteeringMethod_mEndEffectorTrajectory__
#define __hpp_mmanipulation__idl_msteeringMethod_mEndEffectorTrajectory__

      class EndEffectorTrajectory;
      class _objref_EndEffectorTrajectory;
      class _impl_EndEffectorTrajectory;
      
      typedef _objref_EndEffectorTrajectory* EndEffectorTrajectory_ptr;
      typedef EndEffectorTrajectory_ptr EndEffectorTrajectoryRef;

      class EndEffectorTrajectory_Helper {
      public:
        typedef EndEffectorTrajectory_ptr _ptr_type;

        static _ptr_type _nil();
        static _CORBA_Boolean is_nil(_ptr_type);
        static void release(_ptr_type);
        static void duplicate(_ptr_type);
        static void marshalObjRef(_ptr_type, cdrStream&);
        static _ptr_type unmarshalObjRef(cdrStream&);
      };

      typedef _CORBA_ObjRef_Var<_objref_EndEffectorTrajectory, EndEffectorTrajectory_Helper> EndEffectorTrajectory_var;
      typedef _CORBA_ObjRef_OUT_arg<_objref_EndEffectorTrajectory,EndEffectorTrajectory_Helper > EndEffectorTrajectory_out;

#endif

      // interface EndEffectorTrajectory
      class EndEffectorTrajectory {
      public:
        // Declarations for this interface type.
        typedef EndEffectorTrajectory_ptr _ptr_type;
        typedef EndEffectorTrajectory_var _var_type;

        static _ptr_type _duplicate(_ptr_type);
        static _ptr_type _narrow(::CORBA::Object_ptr);
        static _ptr_type _unchecked_narrow(::CORBA::Object_ptr);
        
        static _ptr_type _nil();

        static inline void _marshalObjRef(_ptr_type, cdrStream&);

        static inline _ptr_type _unmarshalObjRef(cdrStream& s) {
          omniObjRef* o = omniObjRef::_unMarshal(_PD_repoId,s);
          if (o)
            return (_ptr_type) o->_ptrToObjRef(_PD_repoId);
          else
            return _nil();
        }

        static _core_attr const char* _PD_repoId;

        // Other IDL defined within this scope.
        
      };

      class _objref_EndEffectorTrajectory :
        public virtual core_idl::_objref_SteeringMethod
      {
      public:
        void trajectoryConstraint(::hpp::constraints_idl::Implicit_ptr c);
        void trajectory(::hpp::core_idl::Path_ptr eeTraj, ::CORBA::Boolean se3Output);

        inline _objref_EndEffectorTrajectory()  { _PR_setobj(0); }  // nil
        _objref_EndEffectorTrajectory(omniIOR*, omniIdentity*);

      protected:
        virtual ~_objref_EndEffectorTrajectory();

        
      private:
        virtual void* _ptrToObjRef(const char*);

        _objref_EndEffectorTrajectory(const _objref_EndEffectorTrajectory&);
        _objref_EndEffectorTrajectory& operator = (const _objref_EndEffectorTrajectory&);
        // not implemented

        friend class EndEffectorTrajectory;
      };

      class _pof_EndEffectorTrajectory : public _OMNI_NS(proxyObjectFactory) {
      public:
        inline _pof_EndEffectorTrajectory() : _OMNI_NS(proxyObjectFactory)(EndEffectorTrajectory::_PD_repoId) {}
        virtual ~_pof_EndEffectorTrajectory();

        virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
        virtual _CORBA_Boolean is_a(const char*) const;
      };

      class _impl_EndEffectorTrajectory :
        public virtual core_idl::_impl_SteeringMethod
      {
      public:
        virtual ~_impl_EndEffectorTrajectory();

        virtual void trajectoryConstraint(::hpp::constraints_idl::Implicit_ptr c) = 0;
        virtual void trajectory(::hpp::core_idl::Path_ptr eeTraj, ::CORBA::Boolean se3Output) = 0;
        
      public:  // Really protected, workaround for xlC
        virtual _CORBA_Boolean _dispatch(omniCallHandle&);

      private:
        virtual void* _ptrToInterface(const char*);
        virtual const char* _mostDerivedRepoId();
        
      };


    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE constraints_idl
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

  _CORBA_MODULE core_idl
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

  _CORBA_MODULE manipulation_idl
  _CORBA_MODULE_BEG

    _CORBA_MODULE steeringMethod
    _CORBA_MODULE_BEG

      class EndEffectorTrajectory :
        public virtual hpp::manipulation_idl::steeringMethod::_impl_EndEffectorTrajectory,
        public virtual core_idl::SteeringMethod
      {
      public:
        virtual ~EndEffectorTrajectory();

        inline ::hpp::manipulation_idl::steeringMethod::EndEffectorTrajectory_ptr _this() {
          return (::hpp::manipulation_idl::steeringMethod::EndEffectorTrajectory_ptr) _do_this(::hpp::manipulation_idl::steeringMethod::EndEffectorTrajectory::_PD_repoId);
        }
      };

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE constraints_idl
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

  _CORBA_MODULE core_idl
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

  _CORBA_MODULE manipulation_idl
  _CORBA_MODULE_BEG

    _CORBA_MODULE steeringMethod
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
hpp::manipulation_idl::steeringMethod::EndEffectorTrajectory::_marshalObjRef(::hpp::manipulation_idl::steeringMethod::EndEffectorTrajectory_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_steering__methods
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_steering__methods
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_steering__methods
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_steering__methods
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_steering__methods
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_steering__methods
#endif

#endif  // __steering__methods_hh__
