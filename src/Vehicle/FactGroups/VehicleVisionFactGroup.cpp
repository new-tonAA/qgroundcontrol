#include "VehicleVisionFactGroup.h"
#include "Vehicle.h"

const char* VehicleVisionFactGroup::_posXFactName = "posX";
const char* VehicleVisionFactGroup::_posYFactName = "posY";
const char* VehicleVisionFactGroup::_posZFactName = "posZ";
const char* VehicleVisionFactGroup::_velXFactName = "velX";
const char* VehicleVisionFactGroup::_velYFactName = "velY";
const char* VehicleVisionFactGroup::_velZFactName = "velZ";
const char* VehicleVisionFactGroup::_statusFactName = "status";
const char* VehicleVisionFactGroup::_healthFactName = "health";


VehicleVisionFactGroup::VehicleVisionFactGroup(QObject *parent)
    : FactGroup{100, ":/json/Vehicle/VisionFact.json", parent}
      , _posXFact(0,  _posXFactName, FactMetaData::valueTypeFloat)
      , _posYFact(0,  _posYFactName, FactMetaData::valueTypeFloat)
      , _posZFact(0,  _posZFactName, FactMetaData::valueTypeFloat)
      , _velXFact(0,  _velXFactName, FactMetaData::valueTypeFloat)
      , _velYFact(0,  _velYFactName, FactMetaData::valueTypeFloat)
      , _velZFact(0,  _velZFactName, FactMetaData::valueTypeFloat)
      , _statusFact(0,  _statusFactName, FactMetaData::valueTypeUint32)
      , _healthFact(0,  _healthFactName, FactMetaData::valueTypeUint32)
{
    _addFact(&_posXFact,  _posXFactName);
    _addFact(&_posYFact,  _posYFactName);
    _addFact(&_posZFact,  _posZFactName);
    _addFact(&_velXFact,  _velXFactName);
    _addFact(&_velYFact,  _velYFactName);
    _addFact(&_velZFact,  _velZFactName);
    _addFact(&_statusFact,  _statusFactName);
    _addFact(&_healthFact,  _healthFactName);
}

void VehicleVisionFactGroup::handleMessage(Vehicle* vehicle, const mavlink_message_t& message){
    if(message.msgid == MAVLINK_MSG_ID_VISION_POSITION_ESTIMATE) {
        mavlink_vision_position_estimate_t pos_msg;
        mavlink_msg_vision_position_estimate_decode(&message, &pos_msg);
        _posXFact.setRawValue(pos_msg.x);
        _posYFact.setRawValue(pos_msg.y);
        _posZFact.setRawValue(pos_msg.z);

        _statusFact.setRawValue(pos_msg.covariance[1]);
        _healthFact.setRawValue(pos_msg.covariance[0]);;
    }

    if(message.msgid == MAVLINK_MSG_ID_VISION_SPEED_ESTIMATE)
    {
        mavlink_vision_speed_estimate_t vel_msg;
        mavlink_msg_vision_speed_estimate_decode(&message, &vel_msg);
        _velXFact.setRawValue(vel_msg.x);
        _velYFact.setRawValue(vel_msg.y);
        _velZFact.setRawValue(vel_msg.z);
    }
}
