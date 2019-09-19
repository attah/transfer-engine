/*
 * Copyright (c) 2013 - 2019 Jolla Ltd.
 *
 * All rights reserved.
 *
 * This file is part of Sailfish Transfer Engine package.
 *
 * You may use this file under the terms of the GNU Lesser General
 * Public License version 2.1 as published by the Free Software Foundation
 * and appearing in the file license.lgpl included in the packaging
 * of this file.
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License version 2.1 as published by the Free Software Foundation
 * and appearing in the file license.lgpl included in the packaging
 * of this file.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * Lesser General Public License for more details.
 */

#ifndef UT_IMAGEOPERATION_H
#define UT_IMAGEOPERATION_H

#include <QObject>

class ut_imageoperation : public QObject
{
    Q_OBJECT
public:

    QString createTestFile(const QString &fileName, bool writeContent = true);

private slots:
    void testScale();
    void testScaleToSize();
    void testDropMetadata();
    void testUniqueFilePath();
    void testOrientation();
};

#endif // UT_IMAGEOPERATION_H
