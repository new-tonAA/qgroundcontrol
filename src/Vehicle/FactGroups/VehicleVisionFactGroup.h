#ifndef VEHICLEVISIONFACTGROUP_H
#define VEHICLEVISIONFACTGROUP_H
#pragma once

#include <FactSystem/FactGroup.h>
#include "MAVLink/QGCMAVLink.h"

class VehicleVisionFactGroup : public FactGroup
{
    Q_OBJECT
   public:
    VehicleVisionFactGroup(QObject *parent = nullptr);

    Q_PROPERTY(Fact* posX    READ posX    CONSTANT)
    Q_PROPERTY(Fact* posY    READ posY    CONSTANT)
    Q_PROPERTY(Fact* posZ    READ posZ    CONSTANT)
    Q_PROPERTY(Fact* velX    READ velX    CONSTANT)
    Q_PROPERTY(Fact* velY    READ velY    CONSTANT)
    Q_PROPERTY(Fact* velZ    READ velZ    CONSTANT)
    Q_PROPERTY(Fact* status  READ status  CONSTANT)
    Q_PROPERTY(Fact* health  READ health  CONSTANT)


    Fact* posX   () {return &_posXFact;}
    Fact* posY   () {return &_posYFact;}
    Fact* posZ   () {return &_posZFact;}
    Fact* velX   () {return &_velXFact;}
    Fact* velY   () {return &_velYFact;}
    Fact* velZ   () {return &_velZFact;}
    Fact* status () {return &_statusFact;}
    Fact* health () {return &_healthFact;}


            // Overrides from FactGroup
    void handleMessage(Vehicle* vehicle, const mavlink_message_t& message) override;

    static const char* _posXFactName;
    static const char* _posYFactName;
    static const char* _posZFactName;
    static const char* _velXFactName;
    static const char* _velYFactName;
    static const char* _velZFactName;
    static const char* _statusFactName;
    static const char* _healthFactName;


   private:
    Fact _posXFact;
    Fact _posYFact;
    Fact _posZFact;
    Fact _velXFact;
    Fact _velYFact;
    Fact _velZFact;
    Fact _statusFact;
    Fact _healthFact;
};

#endif  // VEHICLEVISIONFACTGROUP_H
