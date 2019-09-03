// This file is generated by omniidl (C++ backend)- omniORB_4_1. Do not edit.
#ifndef __robot_hh__
#define __robot_hh__

#ifndef __CORBA_H_EXTERNAL_GUARD__
#include <omniORB4/CORBA.h>
#endif

#ifndef  USE_stub_in_nt_dll
# define USE_stub_in_nt_dll_NOT_DEFINED_robot
#endif
#ifndef  USE_core_stub_in_nt_dll
# define USE_core_stub_in_nt_dll_NOT_DEFINED_robot
#endif
#ifndef  USE_dyn_stub_in_nt_dll
# define USE_dyn_stub_in_nt_dll_NOT_DEFINED_robot
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

#ifndef __hpp_mcorbaserver_mmanipulation_mRobot__
#define __hpp_mcorbaserver_mmanipulation_mRobot__

      class Robot;
      class _objref_Robot;
      class _impl_Robot;
      
      typedef _objref_Robot* Robot_ptr;
      typedef Robot_ptr RobotRef;

      class Robot_Helper {
      public:
        typedef Robot_ptr _ptr_type;

        static _ptr_type _nil();
        static _CORBA_Boolean is_nil(_ptr_type);
        static void release(_ptr_type);
        static void duplicate(_ptr_type);
        static void marshalObjRef(_ptr_type, cdrStream&);
        static _ptr_type unmarshalObjRef(cdrStream&);
      };

      typedef _CORBA_ObjRef_Var<_objref_Robot, Robot_Helper> Robot_var;
      typedef _CORBA_ObjRef_OUT_arg<_objref_Robot,Robot_Helper > Robot_out;

#endif

      // interface Robot
      class Robot {
      public:
        // Declarations for this interface type.
        typedef Robot_ptr _ptr_type;
        typedef Robot_var _var_type;

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

      class _objref_Robot :
        public virtual ::CORBA::Object,
        public virtual omniObjRef
      {
      public:
        void insertRobotModel(const char* robotName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix);
        void insertRobotModelOnFrame(const char* robotName, const char* frameName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix);
        void insertRobotModelFromString(const char* robotName, const char* rootJointType, const char* urdfString, const char* srdfString);
        void insertRobotSRDFModel(const char* robotName, const char* packageName, const char* modelName, const char* srdfSuffix);
        void insertHumanoidModel(const char* robotName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix);
        void insertHumanoidModelFromString(const char* robotName, const char* rootJointType, const char* urdfString, const char* srdfString);
        void insertObjectModel(const char* objectName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix);
        void loadEnvironmentModel(const char* packageName, const char* envModelName, const char* urdfSuffix, const char* srdfSuffix, const char* prefix);
        Transform__slice* getRootJointPosition(const char* robotName);
        void setRootJointPosition(const char* robotName, const ::hpp::Transform_ position);
        void addGripper(const char* linkName, const char* gripperName, const ::hpp::Transform_ handlePositioninJoint);
        void addHandle(const char* linkName, const char* handleName, const ::hpp::Transform_ localPosition);
        void addAxialHandle(const char* linkName, const char* handleName, const ::hpp::Transform_ localPosition);
        char* getGripperPositionInJoint(const char* gripperName, ::hpp::Transform_ position);
        char* getHandlePositionInJoint(const char* handleName, ::hpp::Transform_ position);

        inline _objref_Robot()  { _PR_setobj(0); }  // nil
        _objref_Robot(omniIOR*, omniIdentity*);

      protected:
        virtual ~_objref_Robot();

        
      private:
        virtual void* _ptrToObjRef(const char*);

        _objref_Robot(const _objref_Robot&);
        _objref_Robot& operator = (const _objref_Robot&);
        // not implemented

        friend class Robot;
      };

      class _pof_Robot : public _OMNI_NS(proxyObjectFactory) {
      public:
        inline _pof_Robot() : _OMNI_NS(proxyObjectFactory)(Robot::_PD_repoId) {}
        virtual ~_pof_Robot();

        virtual omniObjRef* newObjRef(omniIOR*,omniIdentity*);
        virtual _CORBA_Boolean is_a(const char*) const;
      };

      class _impl_Robot :
        public virtual omniServant
      {
      public:
        virtual ~_impl_Robot();

        virtual void insertRobotModel(const char* robotName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix) = 0;
        virtual void insertRobotModelOnFrame(const char* robotName, const char* frameName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix) = 0;
        virtual void insertRobotModelFromString(const char* robotName, const char* rootJointType, const char* urdfString, const char* srdfString) = 0;
        virtual void insertRobotSRDFModel(const char* robotName, const char* packageName, const char* modelName, const char* srdfSuffix) = 0;
        virtual void insertHumanoidModel(const char* robotName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix) = 0;
        virtual void insertHumanoidModelFromString(const char* robotName, const char* rootJointType, const char* urdfString, const char* srdfString) = 0;
        virtual void insertObjectModel(const char* objectName, const char* rootJointType, const char* packageName, const char* modelName, const char* urdfSuffix, const char* srdfSuffix) = 0;
        virtual void loadEnvironmentModel(const char* packageName, const char* envModelName, const char* urdfSuffix, const char* srdfSuffix, const char* prefix) = 0;
        virtual Transform__slice* getRootJointPosition(const char* robotName) = 0;
        virtual void setRootJointPosition(const char* robotName, const ::hpp::Transform_ position) = 0;
        virtual void addGripper(const char* linkName, const char* gripperName, const ::hpp::Transform_ handlePositioninJoint) = 0;
        virtual void addHandle(const char* linkName, const char* handleName, const ::hpp::Transform_ localPosition) = 0;
        virtual void addAxialHandle(const char* linkName, const char* handleName, const ::hpp::Transform_ localPosition) = 0;
        virtual char* getGripperPositionInJoint(const char* gripperName, ::hpp::Transform_ position) = 0;
        virtual char* getHandlePositionInJoint(const char* handleName, ::hpp::Transform_ position) = 0;
        
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

      class Robot :
        public virtual hpp::corbaserver::manipulation::_impl_Robot,
        public virtual ::PortableServer::ServantBase
      {
      public:
        virtual ~Robot();

        inline ::hpp::corbaserver::manipulation::Robot_ptr _this() {
          return (::hpp::corbaserver::manipulation::Robot_ptr) _do_this(::hpp::corbaserver::manipulation::Robot::_PD_repoId);
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
hpp::corbaserver::manipulation::Robot::_marshalObjRef(::hpp::corbaserver::manipulation::Robot_ptr obj, cdrStream& s) {
  omniObjRef::_marshal(obj->_PR_getobj(),s);
}




#ifdef   USE_stub_in_nt_dll_NOT_DEFINED_robot
# undef  USE_stub_in_nt_dll
# undef  USE_stub_in_nt_dll_NOT_DEFINED_robot
#endif
#ifdef   USE_core_stub_in_nt_dll_NOT_DEFINED_robot
# undef  USE_core_stub_in_nt_dll
# undef  USE_core_stub_in_nt_dll_NOT_DEFINED_robot
#endif
#ifdef   USE_dyn_stub_in_nt_dll_NOT_DEFINED_robot
# undef  USE_dyn_stub_in_nt_dll
# undef  USE_dyn_stub_in_nt_dll_NOT_DEFINED_robot
#endif

#endif  // __robot_hh__
