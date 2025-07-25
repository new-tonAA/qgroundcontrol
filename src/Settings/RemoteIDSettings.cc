/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "RemoteIDSettings.h"

DECLARE_SETTINGGROUP(RemoteID, "RemoteID")
{
}

DECLARE_SETTINGSFACT(RemoteIDSettings,  operatorID)
DECLARE_SETTINGSFACT(RemoteIDSettings,  operatorIDValid)
DECLARE_SETTINGSFACT(RemoteIDSettings,  operatorIDType)
DECLARE_SETTINGSFACT(RemoteIDSettings,  sendOperatorID)
DECLARE_SETTINGSFACT(RemoteIDSettings,  selfIDFree)
DECLARE_SETTINGSFACT(RemoteIDSettings,  selfIDEmergency)
DECLARE_SETTINGSFACT(RemoteIDSettings,  selfIDExtended)
DECLARE_SETTINGSFACT(RemoteIDSettings,  selfIDType)
DECLARE_SETTINGSFACT(RemoteIDSettings,  sendSelfID)
DECLARE_SETTINGSFACT(RemoteIDSettings,  basicID)
DECLARE_SETTINGSFACT(RemoteIDSettings,  basicIDType)
DECLARE_SETTINGSFACT(RemoteIDSettings,  basicIDUaType)
DECLARE_SETTINGSFACT(RemoteIDSettings,  sendBasicID)
DECLARE_SETTINGSFACT(RemoteIDSettings,  region)
DECLARE_SETTINGSFACT(RemoteIDSettings,  locationType)
DECLARE_SETTINGSFACT(RemoteIDSettings,  latitudeFixed)
DECLARE_SETTINGSFACT(RemoteIDSettings,  longitudeFixed)
DECLARE_SETTINGSFACT(RemoteIDSettings,  altitudeFixed)
DECLARE_SETTINGSFACT(RemoteIDSettings,  classificationType)
DECLARE_SETTINGSFACT(RemoteIDSettings,  categoryEU)
DECLARE_SETTINGSFACT(RemoteIDSettings,  classEU)
