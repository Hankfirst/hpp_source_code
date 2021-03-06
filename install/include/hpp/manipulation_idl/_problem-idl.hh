// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef hpp_manipulation_idl____problem_hh__
#define hpp_manipulation_idl____problem_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED___problem
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED___problem
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED___problem
#endif



#ifndef hpp_manipulation_idl__common_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__common_hh_EXTERNAL_GUARD__
#include <hpp/common-idl.hh>
#endif
#ifndef hpp_manipulation_idl____problem_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl____problem_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/_problem-idl.hh>
#endif
#ifndef hpp_manipulation_idl__distances_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__distances_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/distances-idl.hh>
#endif
#ifndef hpp_manipulation_idl__paths_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__paths_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/paths-idl.hh>
#endif
#ifndef hpp_manipulation_idl__constraints_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__constraints_hh_EXTERNAL_GUARD__
#include <hpp/constraints_idl/constraints-idl.hh>
#endif
#ifndef hpp_manipulation_idl____constraints_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl____constraints_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/_constraints-idl.hh>
#endif
#ifndef hpp_manipulation_idl__steering__methods_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__steering__methods_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/steering_methods-idl.hh>
#endif
#ifndef hpp_manipulation_idl__path__validations_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__path__validations_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/path_validations-idl.hh>
#endif
#ifndef hpp_manipulation_idl__configuration__shooters_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__configuration__shooters_hh_EXTERNAL_GUARD__
#include <hpp/core_idl/configuration_shooters-idl.hh>
#endif
#ifndef hpp_manipulation_idl__gcommon_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl__gcommon_hh_EXTERNAL_GUARD__
#include <hpp/corbaserver/manipulation/gcommon-idl.hh>
#endif
#ifndef hpp_manipulation_idl____graph_hh_EXTERNAL_GUARD__
#define hpp_manipulation_idl____graph_hh_EXTERNAL_GUARD__
#include <hpp/manipulation_idl/_graph-idl.hh>
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

#ifndef __hpp_mcore__idl_mProblem__
#define __hpp_mcore__idl_mProblem__

    class Problem;
    class _objref_Problem;
    class _impl_Problem;
    
    typedef _objref_Problem* Problem_ptr;
    typedef Problem_ptr ProblemRef;

    class Problem_Helper {
    public:
      typedef Problem_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_Problem, Problem_Helper> Problem_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_Problem,Problem_Helper > Problem_out;

#endif

  _CORBA_MODULE_END

  _CORBA_MODULE manipulation_idl

  _CORBA_MODULE_BEG

    _CORBA_MODULE graph_idl

    _CORBA_MODULE_BEG

#ifndef __hpp_mmanipulation__idl_mgraph__idl_mGraph__
#define __hpp_mmanipulation__idl_mgraph__idl_mGraph__

      class Graph;
      class _objref_Graph;
      class _impl_Graph;
      
      typedef _objref_Graph* Graph_ptr;
      typedef Graph_ptr GraphRef;

      class Graph_Helper {
      public:
        typedef Graph_ptr _ptr_type;

        static _ptr_type _nil();
        static _CORBA_Boolean is_nil(_ptr_type);
        static void release(_ptr_type);
        static void duplicate(_ptr_type);
        static void marshalObjRef(_ptr_type, cdrStream&);
        static _ptr_type unmarshalObjRef(cdrStream&);
      };

      typedef _CORBA_ObjRef_Var<_objref_Graph, Graph_Helper> Graph_var;
      typedef _CORBA_ObjRef_OUT_arg<_objref_Graph,Graph_Helper > Graph_out;

#endif

    _CORBA_MODULE_END

#ifndef __hpp_mmanipulation__idl_mProblem__
#define __hpp_mmanipulation__idl_mProblem__

    class Problem;
    class _objref_Problem;
    class _impl_Problem;
    
    typedef _objref_Problem* Problem_ptr;
    typedef Problem_ptr ProblemRef;

    class Problem_Helper {
    public:
      typedef Problem_ptr _ptr_type;

      static _ptr_type _nil();
      static _CORBA_Boolean is_nil(_ptr_type);
      static void release(_ptr_type);
      static void duplicate(_ptr_type);
      static void marshalObjRef(_ptr_type, cdrStream&);
      static _ptr_type unmarshalObjRef(cdrStream&);
    };

    typedef _CORBA_ObjRef_Var<_objref_Problem, Problem_Helper> Problem_var;
    typedef _CORBA_ObjRef_OUT_arg<_objref_Problem,Problem_Helper > Problem_out;

#endif

    // interface Problem
    class Problem {
    public:
      // Declarations for this interface type.
      typedef Problem_ptr _ptr_type;
      typedef Problem_var _var_type;

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

    class _objref_Problem :
      public virtual core_idl::_objref_Problem
    {
    public:
      graph_idl::Graph_ptr getConstraintGraph();

      inline _objref_Problem()  { _PR_setobj(0); }  // nil
      _objref_Problem(omniIOR*, omniIdentity*);

    protected:
      virtual ~_objref_Problem();

      
    private:
      virtual void* _ptrToObjRef(const char*);

      _objref_Problem(const _objref_Problem&);
      _objref_Problem& operator = (const _objref_Problem&);
      // not implemented

      friend class Problem;
    };

    class _pof_Problem : public _OMNI_NS(proxyObjectFactory) {
    public:
      inline _pof_Problem() : _OMNI_NS(proxyObjectFactory)(Problem::_PD_repoId) {}
      virtual ~_pof_Problem();

      virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
      virtual _CORBA_Boolean is_a(const char*) const;
    };

    class _impl_Problem :
      public virtual core_idl::_impl_Problem
    {
    public:
      virtual ~_impl_Problem();

      virtual graph_idl::Graph_ptr getConstraintGraph() = 0;
      
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

  _CORBA_MODULE_END

  _CORBA_MODULE manipulation_idl
  _CORBA_MODULE_BEG

    _CORBA_MODULE graph_idl
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

    class Problem :
      public virtual hpp::manipulation_idl::_impl_Problem,
      public virtual core_idl::Problem
    {
    public:
      virtual ~Problem();

      inline ::hpp::manipulation_idl::Problem_ptr _this() {
        return (::hpp::manipulation_idl::Problem_ptr) _do_this(::hpp::manipulation_idl::Problem::_PD_repoId);
      }
    };

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE core_idl
  _CORBA_MODULE_BEG

  _CORBA_MODULE_END

  _CORBA_MODULE manipulation_idl
  _CORBA_MODULE_BEG

    _CORBA_MODULE graph_idl
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
hpp::manipulation_idl::Problem::_marshalObjRef(::hpp::manipulation_idl::Problem_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED___problem
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED___problem
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED___problem
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED___problem
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED___problem
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED___problem
#endif

#endif  // ____problem_hh__

