/*
 * This file was generated by qdbusxml2cpp-fix version 0.8
 * Command line was: qdbusxml2cpp-fix -c Device -p generated/org_freedesktop_networkmanager_device /home/kazushin/WorkSpace/Deepin/dde-qt-dbus-factory/xml/org.freedesktop.NetworkManager.Device.xml
 *
 * qdbusxml2cpp-fix is Copyright (C) 2016 Deepin Technology Co., Ltd.
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#include "org_freedesktop_networkmanager_device.h"

/*
 * Implementation of interface class __Device
 */

__Device::__Device(const QString &service, const QString &path, const QDBusConnection &connection, QObject *parent)
    : DBusExtendedAbstractInterface(service, path, staticInterfaceName(), connection, parent)
{
    connect(this, &__Device::propertyChanged, this, &__Device::onPropertyChanged);

}

__Device::~__Device()
{
}

void __Device::onPropertyChanged(const QString &propName, const QVariant &value)
{
    if (propName == QStringLiteral("Interface"))
    {
        const QString Interface = qvariant_cast<QString>(value);
        if (m_Interface != Interface)
        {
            m_Interface = Interface;
            emit InterfaceChanged(m_Interface);
        }
        return;
    }

    qWarning() << "property not handle: " << propName;
    return;
}
