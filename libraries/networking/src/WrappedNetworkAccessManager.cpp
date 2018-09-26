//
//  WrappedNetworkAccessManager.cpp
//  libraries/commerce/src
//
//  Created by Kerry Ivan Kurian on 9/26/18.
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#include "WrappedNetworkAccessManager.h"
#include "ResourceAccessMonitor.h"
#include "DependencyManager.h"


QNetworkReply* WrappedNetworkAccessManager::get(const QNetworkRequest& request) {
    DependencyManager::get<ResourceAccessMonitor>()->log(request);
    return QNetworkAccessManager::get(request);
}
