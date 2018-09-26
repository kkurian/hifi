//
//  ResourceAccessMonitor.h
//  libraries/networking/src
//
//  Created by Kerry Ivan Kurian on 9/27/18.
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//


#include <QString>
#include "ResourceAccessMonitor.h"


void ResourceAccessMonitor::log(const QNetworkRequest& request) {
    qDebug() << "!!!!!!! log() " << request.url().toDisplayString() << "!!!!!";
    emit resourceAccessEvent(request.url().toDisplayString());
}
