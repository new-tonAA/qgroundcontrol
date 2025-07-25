/****************************************************************************
 *
 * (c) 2009-2024 QGROUNDCONTROL PROJECT <http://www.qgroundcontrol.org>
 *
 * QGroundControl is licensed according to the terms in the file
 * COPYING.md in the root of the source code directory.
 *
 ****************************************************************************/

#pragma once

#include <QtQmlIntegration/QtQmlIntegration>
#include <QtQuick/QQuickItem>

class VideoItemStub : public QQuickItem
{
    Q_OBJECT
    QML_NAMED_ELEMENT(GstQt6VideoItem)

public:
    explicit VideoItemStub(QQuickItem *parent = nullptr)
        : QQuickItem(parent) {}
};
