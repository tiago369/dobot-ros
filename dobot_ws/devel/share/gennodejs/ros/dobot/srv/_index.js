
"use strict";

let GetDeviceSN = require('./GetDeviceSN.js')
let SetCPParams = require('./SetCPParams.js')
let SetEMotor = require('./SetEMotor.js')
let GetInfraredSensor = require('./GetInfraredSensor.js')
let SetEndEffectorGripper = require('./SetEndEffectorGripper.js')
let SetQueuedCmdStopExec = require('./SetQueuedCmdStopExec.js')
let GetEndEffectorGripper = require('./GetEndEffectorGripper.js')
let GetPTPJointParams = require('./GetPTPJointParams.js')
let GetColorSensor = require('./GetColorSensor.js')
let SetARCCmd = require('./SetARCCmd.js')
let GetCPParams = require('./GetCPParams.js')
let GetIODO = require('./GetIODO.js')
let SetIODO = require('./SetIODO.js')
let SetPTPCmd = require('./SetPTPCmd.js')
let GetDeviceName = require('./GetDeviceName.js')
let GetARCParams = require('./GetARCParams.js')
let SetEndEffectorLaser = require('./SetEndEffectorLaser.js')
let GetJOGCommonParams = require('./GetJOGCommonParams.js')
let GetJOGJointParams = require('./GetJOGJointParams.js')
let SetARCParams = require('./SetARCParams.js')
let GetJOGCoordinateParams = require('./GetJOGCoordinateParams.js')
let SetJOGCoordinateParams = require('./SetJOGCoordinateParams.js')
let SetPTPJointParams = require('./SetPTPJointParams.js')
let SetDeviceName = require('./SetDeviceName.js')
let SetHOMEParams = require('./SetHOMEParams.js')
let SetHOMECmd = require('./SetHOMECmd.js')
let GetPose = require('./GetPose.js')
let SetJOGCommonParams = require('./SetJOGCommonParams.js')
let SetTRIGCmd = require('./SetTRIGCmd.js')
let GetDeviceVersion = require('./GetDeviceVersion.js')
let SetQueuedCmdClear = require('./SetQueuedCmdClear.js')
let GetEndEffectorParams = require('./GetEndEffectorParams.js')
let SetPTPJumpParams = require('./SetPTPJumpParams.js')
let SetCPCmd = require('./SetCPCmd.js')
let GetEndEffectorLaser = require('./GetEndEffectorLaser.js')
let GetIOMultiplexing = require('./GetIOMultiplexing.js')
let SetCmdTimeout = require('./SetCmdTimeout.js')
let SetIOPWM = require('./SetIOPWM.js')
let GetPTPJumpParams = require('./GetPTPJumpParams.js')
let GetHOMEParams = require('./GetHOMEParams.js')
let SetWAITCmd = require('./SetWAITCmd.js')
let SetEndEffectorSuctionCup = require('./SetEndEffectorSuctionCup.js')
let SetPTPCoordinateParams = require('./SetPTPCoordinateParams.js')
let GetPTPCoordinateParams = require('./GetPTPCoordinateParams.js')
let SetEndEffectorParams = require('./SetEndEffectorParams.js')
let GetAlarmsState = require('./GetAlarmsState.js')
let GetCPCmd = require('./GetCPCmd.js')
let SetQueuedCmdForceStopExec = require('./SetQueuedCmdForceStopExec.js')
let SetJOGCmd = require('./SetJOGCmd.js')
let ClearAllAlarmsState = require('./ClearAllAlarmsState.js')
let SetColorSensor = require('./SetColorSensor.js')
let GetEndEffectorSuctionCup = require('./GetEndEffectorSuctionCup.js')
let SetIOMultiplexing = require('./SetIOMultiplexing.js')
let SetJOGJointParams = require('./SetJOGJointParams.js')
let SetPTPCommonParams = require('./SetPTPCommonParams.js')
let SetInfraredSensor = require('./SetInfraredSensor.js')
let GetIOADC = require('./GetIOADC.js')
let GetIOPWM = require('./GetIOPWM.js')
let GetIODI = require('./GetIODI.js')
let SetQueuedCmdStartExec = require('./SetQueuedCmdStartExec.js')
let GetPTPCommonParams = require('./GetPTPCommonParams.js')

module.exports = {
  GetDeviceSN: GetDeviceSN,
  SetCPParams: SetCPParams,
  SetEMotor: SetEMotor,
  GetInfraredSensor: GetInfraredSensor,
  SetEndEffectorGripper: SetEndEffectorGripper,
  SetQueuedCmdStopExec: SetQueuedCmdStopExec,
  GetEndEffectorGripper: GetEndEffectorGripper,
  GetPTPJointParams: GetPTPJointParams,
  GetColorSensor: GetColorSensor,
  SetARCCmd: SetARCCmd,
  GetCPParams: GetCPParams,
  GetIODO: GetIODO,
  SetIODO: SetIODO,
  SetPTPCmd: SetPTPCmd,
  GetDeviceName: GetDeviceName,
  GetARCParams: GetARCParams,
  SetEndEffectorLaser: SetEndEffectorLaser,
  GetJOGCommonParams: GetJOGCommonParams,
  GetJOGJointParams: GetJOGJointParams,
  SetARCParams: SetARCParams,
  GetJOGCoordinateParams: GetJOGCoordinateParams,
  SetJOGCoordinateParams: SetJOGCoordinateParams,
  SetPTPJointParams: SetPTPJointParams,
  SetDeviceName: SetDeviceName,
  SetHOMEParams: SetHOMEParams,
  SetHOMECmd: SetHOMECmd,
  GetPose: GetPose,
  SetJOGCommonParams: SetJOGCommonParams,
  SetTRIGCmd: SetTRIGCmd,
  GetDeviceVersion: GetDeviceVersion,
  SetQueuedCmdClear: SetQueuedCmdClear,
  GetEndEffectorParams: GetEndEffectorParams,
  SetPTPJumpParams: SetPTPJumpParams,
  SetCPCmd: SetCPCmd,
  GetEndEffectorLaser: GetEndEffectorLaser,
  GetIOMultiplexing: GetIOMultiplexing,
  SetCmdTimeout: SetCmdTimeout,
  SetIOPWM: SetIOPWM,
  GetPTPJumpParams: GetPTPJumpParams,
  GetHOMEParams: GetHOMEParams,
  SetWAITCmd: SetWAITCmd,
  SetEndEffectorSuctionCup: SetEndEffectorSuctionCup,
  SetPTPCoordinateParams: SetPTPCoordinateParams,
  GetPTPCoordinateParams: GetPTPCoordinateParams,
  SetEndEffectorParams: SetEndEffectorParams,
  GetAlarmsState: GetAlarmsState,
  GetCPCmd: GetCPCmd,
  SetQueuedCmdForceStopExec: SetQueuedCmdForceStopExec,
  SetJOGCmd: SetJOGCmd,
  ClearAllAlarmsState: ClearAllAlarmsState,
  SetColorSensor: SetColorSensor,
  GetEndEffectorSuctionCup: GetEndEffectorSuctionCup,
  SetIOMultiplexing: SetIOMultiplexing,
  SetJOGJointParams: SetJOGJointParams,
  SetPTPCommonParams: SetPTPCommonParams,
  SetInfraredSensor: SetInfraredSensor,
  GetIOADC: GetIOADC,
  GetIOPWM: GetIOPWM,
  GetIODI: GetIODI,
  SetQueuedCmdStartExec: SetQueuedCmdStartExec,
  GetPTPCommonParams: GetPTPCommonParams,
};
