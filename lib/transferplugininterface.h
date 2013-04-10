/****************************************************************************************
**
** Copyright (C) 2013 Jolla Ltd.
** Contact: Marko Mattila <marko.mattila@jollamobile.com>
** All rights reserved.
**
** This file is part of Nemo Transfer Engine package.
**
** You may use this file under the terms of the GNU Lesser General
** Public License version 2.1 as published by the Free Software Foundation
** and appearing in the file license.lgpl included in the packaging
** of this file.
**
** This library is free software; you can redistribute it and/or
** modify it under the terms of the GNU Lesser General Public
** License version 2.1 as published by the Free Software Foundation
** and appearing in the file license.lgpl included in the packaging
** of this file.
**
** This library is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
** Lesser General Public License for more details.
**
****************************************************************************************/

#ifndef TRANSFERPLUGININTERFACE_H
#define TRANSFERPLUGININTERFACE_H

#include <QtPlugin>
#include "transferplugininfo.h"


class MediaTransferInterface;
class TransferPluginInterface
{
public:
    virtual MediaTransferInterface * transferObject() = 0;

    virtual TransferPluginInfo *infoObject() = 0;

    virtual QString pluginId() const = 0;

    virtual bool enabled() const = 0;
};

Q_DECLARE_INTERFACE(TransferPluginInterface, "org.nemo.TransferPluginInterface/1.0")
#endif // TRANSFERPLUGININTERFACE_H
