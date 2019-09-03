// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __problem_hh__
#define __problem_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_problem
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_problem
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_problem
#endif



#ifndef __gcommon_hh_EXTERNAL_GUARD__
#define __gcommon_hh_EXTERNAL_GUARD__
#include <hpp/corbaserver/manipulation/gcommon-idl.hh>
#endif
#ifndef __common_hh_EXTERNAL_GUARD__
#define __common_hh_EXTERNAL_GUARD__
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

  _CORBA_MODULE corbaserver

  _CORBA_MODULE_BEG

    _CORBA_MODULE manipulation

    _CORBA_MODULE_BEG

#ifndef __hpp_mcorbaserver_mmanipulation_mProblem__
#define __hpp_mcorbaserver_mmanipulation_mProblem__

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
        public virtual ::CORBA::Object,
        public virtual omniObjRef
      {
      public:
        ::CORBA::Boolean selectProblem(const char* name);
        void resetProblem();
        Names_t* getAvailable(const char* type);
        Names_t* getSelected(const char* type);
        void createGrasp(const char* graspName, const char* gripperName, const char* handleName);
        void createPreGrasp(const char* name, const char* gripper, const char* handle);
        Names_t* getEnvironmentContactNames();
        Names_t* getRobotContactNames();
        Names_t* getEnvironmentContact(const char* name, ::hpp::intSeq_out indexes, ::hpp::floatSeqSeq_out points);
        Names_t* getRobotContact(const char* name, ::hpp::intSeq_out indexes, ::hpp::floatSeqSeq_out points);
        void createPlacementConstraint(const char* placementName, const ::hpp::Names_t& shapeName, const ::hpp::Names_t& envContactName);
        void createPrePlacementConstraint(const char* placementName, const ::hpp::Names_t& shapeName, const ::hpp::Names_t& envContactName, ::CORBA::Double witdh);
        void createQPStabilityConstraint(const char* constraintName, const ::hpp::Names_t& shapesName);
        ::CORBA::Boolean setConstraints(::hpp::ID idComp, ::CORBA::Boolean target);
        ::CORBA::Boolean applyConstraints(::hpp::ID idComp, const ::hpp::floatSeq& input, ::hpp::floatSeq_out output, ::CORBA::Double& residualError);
        ::CORBA::Boolean applyConstraintsWithOffset(::hpp::ID IDedge, const ::hpp::floatSeq& qnear, const ::hpp::floatSeq& input, ::hpp::floatSeq_out output, ::CORBA::Double& residualError);
        ::CORBA::Boolean buildAndProjectPath(::hpp::ID IDedge, const ::hpp::floatSeq& qb, const ::hpp::floatSeq& qe, ::CORBA::Long& indexNotProj, ::CORBA::Long& indexProj);
        void setTargetState(::hpp::ID IDstate);
        ID edgeAtParam(::CORBA::ULong inPathId, ::CORBA::Double atDistance, ::CORBA::String_out graphName);

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
        public virtual omniServant
      {
      public:
        virtual ~_impl_Problem();

        virtual ::CORBA::Boolean selectProblem(const char* name) = 0;
        virtual void resetProblem() = 0;
        virtual Names_t* getAvailable(const char* type) = 0;
        virtual Names_t* getSelected(const char* type) = 0;
        virtual void createGrasp(const char* graspName, const char* gripperName, const char* handleName) = 0;
        virtual void createPreGrasp(const char* name, const char* gripper, const char* handle) = 0;
        virtual Names_t* getEnvironmentContactNames() = 0;
        virtual Names_t* getRobotContactNames() = 0;
        virtual Names_t* getEnvironmentContact(const char* name, ::hpp::intSeq_out indexes, ::hpp::floatSeqSeq_out points) = 0;
        virtual Names_t* getRobotContact(const char* name, ::hpp::intSeq_out indexes, ::hpp::floatSeqSeq_out points) = 0;
        virtual void createPlacementConstraint(const char* placementName, const ::hpp::Names_t& shapeName, const ::hpp::Names_t& envContactName) = 0;
        virtual void createPrePlacementConstraint(const char* placementName, const ::hpp::Names_t& shapeName, const ::hpp::Names_t& envContactName, ::CORBA::Double witdh) = 0;
        virtual void createQPStabilityConstraint(const char* constraintName, const ::hpp::Names_t& shapesName) = 0;
        virtual ::CORBA::Boolean setConstraints(::hpp::ID idComp, ::CORBA::Boolean target) = 0;
        virtual ::CORBA::Boolean applyConstraints(::hpp::ID idComp, const ::hpp::floatSeq& input, ::hpp::floatSeq_out output, ::CORBA::Double& residualError) = 0;
        virtual ::CORBA::Boolean applyConstraintsWithOffset(::hpp::ID IDedge, const ::hpp::floatSeq& qnear, const ::hpp::floatSeq& input, ::hpp::floatSeq_out output, ::CORBA::Double& residualError) = 0;
        virtual ::CORBA::Boolean buildAndProjectPath(::hpp::ID IDedge, const ::hpp::floatSeq& qb, const ::hpp::floatSeq& qe, ::CORBA::Long& indexNotProj, ::CORBA::Long& indexProj) = 0;
        virtual void setTargetState(::hpp::ID IDstate) = 0;
        virtual ID edgeAtParam(::CORBA::ULong inPathId, ::CORBA::Double atDistance, ::CORBA::String_out graphName) = 0;
        
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

  _CORBA_MODULE corbaserver
  _CORBA_MODULE_BEG

    _CORBA_MODULE manipulation
    _CORBA_MODULE_BEG

      class Problem :
        public virtual hpp::corbaserver::manipulation::_impl_Problem,
        public virtual ::PortableServer::ServantBase
      {
      public:
        virtual ~Problem();

        inline ::hpp::corbaserver::manipulation::Problem_ptr _this() {
          return (::hpp::corbaserver::manipulation::Problem_ptr) _do_this(::hpp::corbaserver::manipulation::Problem::_PD_repoId);
        }
      };

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END



_CORBA_MODULE OBV_hpp
_CORBA_MODULE_BEG

  _CORBA_MODULE corbaserver
  _CORBA_MODULE_BEG

    _CORBA_MODULE manipulation
    _CORBA_MODULE_BEG

    _CORBA_MODULE_END

  _CORBA_MODULE_END

_CORBA_MODULE_END





#undef _core_attr
#undef _dyn_attr



inline void
hpp::corbaserver::manipulation::Problem::_marshalObjRef(::hpp::corbaserver::manipulation::Problem_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_problem
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_problem
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_problem
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_problem
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_problem
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_problem
#endif

#endif  // __problem_hh__
