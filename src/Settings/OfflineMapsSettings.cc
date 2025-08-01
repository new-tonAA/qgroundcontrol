/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#include "OfflineMapsSettings.h"

DECLARE_SETTINGGROUP(OfflineMaps, "OfflineMaps")
{
}

DECLARE_SETTINGSFACT(OfflineMapsSettings, minZoomLevelDownload)
DECLARE_SETTINGSFACT(OfflineMapsSettings, maxZoomLevelDownload)
DECLARE_SETTINGSFACT(OfflineMapsSettings, maxTilesForDownload)
