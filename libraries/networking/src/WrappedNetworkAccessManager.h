//
//  WrappedNetworkAccessManager.h
//  libraries/networking/src
//
//  Created by Kerry Ivan Kurian on 9/26/18.
//  Copyright 2018 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_MonitoredNetworkAssetManager_h
#define hifi_MonitoredNetworkAssetManager_h

#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkRequest>


// Wrapper around QNetworkAccessManager that selectively monitors traffic.
class WrappedNetworkAccessManager : public QNetworkAccessManager {
public:
    WrappedNetworkAccessManager(QObject* parent = Q_NULLPTR) : QNetworkAccessManager(parent) {}

    QNetworkReply* get(const QNetworkRequest& request);
//     QNetworkReply* head(const QNetworkRequest& request);
//     QNetworkReply* post(const QNetworkRequest& request, ...);
//     QNetworkReply* put(const QNetworkRequest& request, ...);
//     QNetworkReply* sendCustomRequest(const QNetworkRequest& request, ...);
};


#endif  // hifi_MonitoredNetworkAssetManager_h
