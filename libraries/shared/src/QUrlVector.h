//
//  QUrlVector.h
//  libraries/shared/src/
//
//  Created by Kerry Ivan Kurian on 10/12/18.
//  Copyright (c) 2018 High Fidelity, Inc. All rights reserved.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#ifndef hifi_QUrlVector_H
#define hifi_QUrlVector_H

#include <QJsonArray>
#include <QUrl>
#include <QVector>


class QUrlVector : public QVector<QUrl> {
public:
    QUrlVector();
    void toJson(QJsonArray& array) const;
};


#endif  // hifi_QUrlVector_H
