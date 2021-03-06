// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef hpp_core_idl__distances_hh__
#define hpp_core_idl__distances_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_distances
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_distances
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_distances
#endif



#ifndef hpp_core_idl__common_hh_EXTERNAL_GUARD__
#define hpp_core_idl__common_hh_EXTERNAL_GUARD__
#include <hpp/common-idl.hh>
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

  _CORBA_MODULE core_idl

  _CORBA_MODULE_BEG

#ifndef __hpp_mcore__idl_mDistance__
#define __hpp_mcore__idl_mDistance__

    class Distance;
    class _objref_Distance;
    class _impl_Distance;
    
    typedef _objref_Distance* Distance_ptr;
    typedef Distance_ptr DistanceRef;

    class Distance_Helper {
    public:
      typedef Distance_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_Distance, Distance_Helper> Distance_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_Distance,Distance_Helper > Distance_out;

#endif

    // interface Distance
    class Distance {
    public:
      // Declarations for this interface type.
      typedef Distance_ptr _ptr_type;
      typedef Distance_var _var_type;

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

    class _objref_Distance :
      public virtual ::CORBA::Object,
      public virtual omniObjRef
    {
    public:
      value_type call(const ::hpp::floatSeq& q1, const ::hpp::floatSeq& q2);

      inline _objref_Distance()  { _PR_setobj(0); }  // nil
      _objref_Distance(omniIOR*, omniIdentity*);

    protected:
      virtual ~_objref_Distance();

      
    private:
      virtual void* _ptrToObjRef(const char*);

      _objref_Distance(const _objref_Distance&);
      _objref_Distance& operator = (const _objref_Distance&);
      // not implemented

      friend class Distance;
    };

    class _pof_Distance : public _OMNI_NS(proxyObjectFactory) {
    public:
      inline _pof_Distance() : _OMNI_NS(proxyObjectFactory)(Distance::_PD_repoId) {}
      virtual ~_pof_Distance();

      virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
      virtual _CORBA_Boolean is_a(const char*) const;
    };

    class _impl_Distance :
      public virtual omniServant
    {
    public:
      virtual ~_impl_Distance();

      virtual value_type call(const ::hpp::floatSeq& q1, const ::hpp::floatSeq& q2) = 0;
      
    public:  // Really protected, workaround for xlC
      virtual _CORBA_Boolean _dispatch(omniCallHandle&);

    private:
      virtual void* _ptrToInterface(const char*);
      virtual const char* _mostDerivedRepoId();
      
    };


#ifndef __hpp_mcore__idl_mWeighedDistance__
#define __hpp_mcore__idl_mWeighedDistance__

    class WeighedDistance;
    class _objref_WeighedDistance;
    class _impl_WeighedDistance;
    
    typedef _objref_WeighedDistance* WeighedDistance_ptr;
    typedef WeighedDistance_ptr WeighedDistanceRef;

    class WeighedDistance_Helper {
    public:
      typedef WeighedDistance_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_WeighedDistance, WeighedDistance_Helper> WeighedDistance_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_WeighedDistance,WeighedDistance_Helper > WeighedDistance_out;

#endif

    // interface WeighedDistance
    class WeighedDistance {
    public:
      // Declarations for this interface type.
      typedef WeighedDistance_ptr _ptr_type;
      typedef WeighedDistance_var _var_type;

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

    class _objref_WeighedDistance :
      public virtual _objref_Distance
    {
    public:
      floatSeq* getWeights();
      void setWeights(const ::hpp::floatSeq& weights);

      inline _objref_WeighedDistance()  { _PR_setobj(0); }  // nil
      _objref_WeighedDistance(omniIOR*, omniIdentity*);

    protected:
      virtual ~_objref_WeighedDistance();

      
    private:
      virtual void* _ptrToObjRef(const char*);

      _objref_WeighedDistance(const _objref_WeighedDistance&);
      _objref_WeighedDistance& operator = (const _objref_WeighedDistance&);
      // not implemented

      friend class WeighedDistance;
    };

    class _pof_WeighedDistance : public _OMNI_NS(proxyObjectFactory) {
    public:
      inline _pof_WeighedDistance() : _OMNI_NS(proxyObjectFactory)(WeighedDistance::_PD_repoId) {}
      virtual ~_pof_WeighedDistance();

      virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
      virtual _CORBA_Boolean is_a(const char*) const;
    };

    class _impl_WeighedDistance :
      public virtual _impl_Distance
    {
    public:
      virtual ~_impl_WeighedDistance();

      virtual floatSeq* getWeights() = 0;
      virtual void setWeights(const ::hpp::floatSeq& weights) = 0;
      
    public:  // Really protected, workaround for xlC
      virtual _CORBA_Boolean _dispatch(omniCallHandle&);

    private:
      virtual void* _ptrToInterface(const char*);
      virtual const char* _mostDerivedRepoId();
      
    };


  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE POA_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE core_idl
  _CORBA_MODULE_BEG

    class Distance :
      public virtual hpp::core_idl::_impl_Distance,
      public virtual ::PortableServer::ServantBase
    {
    public:
      virtual ~Distance();

      inline ::hpp::core_idl::Distance_ptr _this() {
        return (::hpp::core_idl::Distance_ptr) _do_this(::hpp::core_idl::Distance::_PD_repoId);
      }
    };

    class WeighedDistance :
      public virtual hpp::core_idl::_impl_WeighedDistance,
      public virtual Distance
    {
    public:
      virtual ~WeighedDistance();

      inline ::hpp::core_idl::WeighedDistance_ptr _this() {
        return (::hpp::core_idl::WeighedDistance_ptr) _do_this(::hpp::core_idl::WeighedDistance::_PD_repoId);
      }
    };

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE core_idl
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
hpp::core_idl::Distance::_marshalObjRef(::hpp::core_idl::Distance_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}


inline void
hpp::core_idl::WeighedDistance::_marshalObjRef(::hpp::core_idl::WeighedDistance_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_distances
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_distances
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_distances
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_distances
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_distances
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_distances
#endif

#endif  // __distances_hh__

