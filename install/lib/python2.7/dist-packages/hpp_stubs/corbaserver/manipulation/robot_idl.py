# Python stubs generated by omniidl from /local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl

import omniORB, _omnipy
from omniORB import CORBA, PortableServer
_0_CORBA = CORBA

_omnipy.checkVersion(3,0, __file__)

# #include "hpp/common.idl"
import hpp_stubs.common_idl
_0_hpp = omniORB.openModule("hpp_stubs.hpp")
_0_hpp__POA = omniORB.openModule("hpp_stubs.hpp__POA")

#
# Start of module "hpp"
#
__name__ = "hpp_idl.hpp"
_0_hpp = omniORB.openModule("hpp_idl.hpp", r"/local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl")
_0_hpp__POA = omniORB.openModule("hpp_idl.hpp__POA", r"/local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl")


#
# Start of module "hpp.corbaserver"
#
__name__ = "hpp_idl.hpp.corbaserver"
_0_hpp.corbaserver = omniORB.openModule("hpp_idl.hpp.corbaserver", r"/local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl")
_0_hpp__POA.corbaserver = omniORB.openModule("hpp_idl.hpp__POA.corbaserver", r"/local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl")


#
# Start of module "hpp.corbaserver.manipulation"
#
__name__ = "hpp_idl.hpp.corbaserver.manipulation"
_0_hpp.corbaserver.manipulation = omniORB.openModule("hpp_idl.hpp.corbaserver.manipulation", r"/local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl")
_0_hpp__POA.corbaserver.manipulation = omniORB.openModule("hpp_idl.hpp__POA.corbaserver.manipulation", r"/local/devel/hpp/src/hpp-manipulation-corba/idl/hpp/corbaserver/manipulation/robot.idl")


# interface Robot
_0_hpp.corbaserver.manipulation._d_Robot = (omniORB.tcInternal.tv_objref, "IDL:hpp/corbaserver/manipulation/Robot:1.0", "Robot")
omniORB.typeMapping["IDL:hpp/corbaserver/manipulation/Robot:1.0"] = _0_hpp.corbaserver.manipulation._d_Robot
_0_hpp.corbaserver.manipulation.Robot = omniORB.newEmptyClass()
class Robot :
    _NP_RepositoryId = _0_hpp.corbaserver.manipulation._d_Robot[1]

    def __init__(self, *args, **kw):
        raise RuntimeError("Cannot construct objects of this type.")

    _nil = CORBA.Object._nil


_0_hpp.corbaserver.manipulation.Robot = Robot
_0_hpp.corbaserver.manipulation._tc_Robot = omniORB.tcInternal.createTypeCode(_0_hpp.corbaserver.manipulation._d_Robot)
omniORB.registerType(Robot._NP_RepositoryId, _0_hpp.corbaserver.manipulation._d_Robot, _0_hpp.corbaserver.manipulation._tc_Robot)

# Robot operations and attributes
Robot._d_insertRobotModel = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_insertRobotModelOnFrame = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_insertRobotModelFromString = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_insertRobotSRDFModel = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_insertHumanoidModel = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_insertHumanoidModelFromString = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_insertObjectModel = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_loadEnvironmentModel = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0)), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_getRootJointPosition = (((omniORB.tcInternal.tv_string,0), ), (omniORB.typeMapping["IDL:hpp/Transform_:1.0"], ), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_setRootJointPosition = (((omniORB.tcInternal.tv_string,0), omniORB.typeMapping["IDL:hpp/Transform_:1.0"]), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_addGripper = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), omniORB.typeMapping["IDL:hpp/Transform_:1.0"]), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_addHandle = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), omniORB.typeMapping["IDL:hpp/Transform_:1.0"]), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_addAxialHandle = (((omniORB.tcInternal.tv_string,0), (omniORB.tcInternal.tv_string,0), omniORB.typeMapping["IDL:hpp/Transform_:1.0"]), (), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_getGripperPositionInJoint = (((omniORB.tcInternal.tv_string,0), ), ((omniORB.tcInternal.tv_string,0), omniORB.typeMapping["IDL:hpp/Transform_:1.0"]), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})
Robot._d_getHandlePositionInJoint = (((omniORB.tcInternal.tv_string,0), ), ((omniORB.tcInternal.tv_string,0), omniORB.typeMapping["IDL:hpp/Transform_:1.0"]), {_0_hpp.Error._NP_RepositoryId: _0_hpp._d_Error})

# Robot object reference
class _objref_Robot (CORBA.Object):
    _NP_RepositoryId = Robot._NP_RepositoryId

    def __init__(self):
        CORBA.Object.__init__(self)

    def insertRobotModel(self, *args):
        return _omnipy.invoke(self, "insertRobotModel", _0_hpp.corbaserver.manipulation.Robot._d_insertRobotModel, args)

    def insertRobotModelOnFrame(self, *args):
        return _omnipy.invoke(self, "insertRobotModelOnFrame", _0_hpp.corbaserver.manipulation.Robot._d_insertRobotModelOnFrame, args)

    def insertRobotModelFromString(self, *args):
        return _omnipy.invoke(self, "insertRobotModelFromString", _0_hpp.corbaserver.manipulation.Robot._d_insertRobotModelFromString, args)

    def insertRobotSRDFModel(self, *args):
        return _omnipy.invoke(self, "insertRobotSRDFModel", _0_hpp.corbaserver.manipulation.Robot._d_insertRobotSRDFModel, args)

    def insertHumanoidModel(self, *args):
        return _omnipy.invoke(self, "insertHumanoidModel", _0_hpp.corbaserver.manipulation.Robot._d_insertHumanoidModel, args)

    def insertHumanoidModelFromString(self, *args):
        return _omnipy.invoke(self, "insertHumanoidModelFromString", _0_hpp.corbaserver.manipulation.Robot._d_insertHumanoidModelFromString, args)

    def insertObjectModel(self, *args):
        return _omnipy.invoke(self, "insertObjectModel", _0_hpp.corbaserver.manipulation.Robot._d_insertObjectModel, args)

    def loadEnvironmentModel(self, *args):
        return _omnipy.invoke(self, "loadEnvironmentModel", _0_hpp.corbaserver.manipulation.Robot._d_loadEnvironmentModel, args)

    def getRootJointPosition(self, *args):
        return _omnipy.invoke(self, "getRootJointPosition", _0_hpp.corbaserver.manipulation.Robot._d_getRootJointPosition, args)

    def setRootJointPosition(self, *args):
        return _omnipy.invoke(self, "setRootJointPosition", _0_hpp.corbaserver.manipulation.Robot._d_setRootJointPosition, args)

    def addGripper(self, *args):
        return _omnipy.invoke(self, "addGripper", _0_hpp.corbaserver.manipulation.Robot._d_addGripper, args)

    def addHandle(self, *args):
        return _omnipy.invoke(self, "addHandle", _0_hpp.corbaserver.manipulation.Robot._d_addHandle, args)

    def addAxialHandle(self, *args):
        return _omnipy.invoke(self, "addAxialHandle", _0_hpp.corbaserver.manipulation.Robot._d_addAxialHandle, args)

    def getGripperPositionInJoint(self, *args):
        return _omnipy.invoke(self, "getGripperPositionInJoint", _0_hpp.corbaserver.manipulation.Robot._d_getGripperPositionInJoint, args)

    def getHandlePositionInJoint(self, *args):
        return _omnipy.invoke(self, "getHandlePositionInJoint", _0_hpp.corbaserver.manipulation.Robot._d_getHandlePositionInJoint, args)

    __methods__ = ["insertRobotModel", "insertRobotModelOnFrame", "insertRobotModelFromString", "insertRobotSRDFModel", "insertHumanoidModel", "insertHumanoidModelFromString", "insertObjectModel", "loadEnvironmentModel", "getRootJointPosition", "setRootJointPosition", "addGripper", "addHandle", "addAxialHandle", "getGripperPositionInJoint", "getHandlePositionInJoint"] + CORBA.Object.__methods__

omniORB.registerObjref(Robot._NP_RepositoryId, _objref_Robot)
_0_hpp.corbaserver.manipulation._objref_Robot = _objref_Robot
del Robot, _objref_Robot

# Robot skeleton
__name__ = "hpp_idl.hpp__POA.corbaserver.manipulation"
class Robot (PortableServer.Servant):
    _NP_RepositoryId = _0_hpp.corbaserver.manipulation.Robot._NP_RepositoryId


    _omni_op_d = {"insertRobotModel": _0_hpp.corbaserver.manipulation.Robot._d_insertRobotModel, "insertRobotModelOnFrame": _0_hpp.corbaserver.manipulation.Robot._d_insertRobotModelOnFrame, "insertRobotModelFromString": _0_hpp.corbaserver.manipulation.Robot._d_insertRobotModelFromString, "insertRobotSRDFModel": _0_hpp.corbaserver.manipulation.Robot._d_insertRobotSRDFModel, "insertHumanoidModel": _0_hpp.corbaserver.manipulation.Robot._d_insertHumanoidModel, "insertHumanoidModelFromString": _0_hpp.corbaserver.manipulation.Robot._d_insertHumanoidModelFromString, "insertObjectModel": _0_hpp.corbaserver.manipulation.Robot._d_insertObjectModel, "loadEnvironmentModel": _0_hpp.corbaserver.manipulation.Robot._d_loadEnvironmentModel, "getRootJointPosition": _0_hpp.corbaserver.manipulation.Robot._d_getRootJointPosition, "setRootJointPosition": _0_hpp.corbaserver.manipulation.Robot._d_setRootJointPosition, "addGripper": _0_hpp.corbaserver.manipulation.Robot._d_addGripper, "addHandle": _0_hpp.corbaserver.manipulation.Robot._d_addHandle, "addAxialHandle": _0_hpp.corbaserver.manipulation.Robot._d_addAxialHandle, "getGripperPositionInJoint": _0_hpp.corbaserver.manipulation.Robot._d_getGripperPositionInJoint, "getHandlePositionInJoint": _0_hpp.corbaserver.manipulation.Robot._d_getHandlePositionInJoint}

Robot._omni_skeleton = Robot
_0_hpp__POA.corbaserver.manipulation.Robot = Robot
omniORB.registerSkeleton(Robot._NP_RepositoryId, Robot)
del Robot
__name__ = "hpp_idl.hpp.corbaserver.manipulation"

#
# End of module "hpp.corbaserver.manipulation"
#
__name__ = "hpp_idl.hpp.corbaserver"


#
# End of module "hpp.corbaserver"
#
__name__ = "hpp_idl.hpp"


#
# End of module "hpp"
#
__name__ = "hpp_stubs.corbaserver.manipulation.robot_idl"

_exported_modules = ( "hpp_idl.hpp", "hpp_idl.hpp.corbaserver", "hpp_idl.hpp.corbaserver.manipulation")

# The end.
