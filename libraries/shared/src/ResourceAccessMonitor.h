//
//  ResourceAccessMonitor.h
//  libraries/commerce/src
//
//  Created by Kerry Ivan Kurian on 9/27/18.
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#include "DependencyManager.h"
#include <QString>
#include <QNetworkRequest>


class ResourceAccessMonitor : public QObject, public Dependency {
    Q_OBJECT
    SINGLETON_DEPENDENCY

public:
    void log(const QNetworkRequest& request);

signals:
    void resourceAccessEvent(QString result);
};
