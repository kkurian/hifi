//
//  AssignmentClient.h
//  assignment-client/src
//
//  Created by Stephen Birarda on 11/25/2013.
//  Copyright 2013 High Fidelity, Inc.
//
//  Distributed under the Apache License, Version 2.0.
//  See the accompanying file LICENSE or http://www.apache.org/licenses/LICENSE-2.0.html
//

#ifndef hifi_AssignmentClient_h
#define hifi_AssignmentClient_h

#include <QtCore/QCoreApplication>
#include <QAbstractNativeEventFilter>

#include "ThreadedAssignment.h"

class AssignmentClient : public QCoreApplication, QAbstractNativeEventFilter {
    Q_OBJECT
public:
    AssignmentClient(int &argc, char **argv);
    static const SharedAssignmentPointer& getCurrentAssignment() { return _currentAssignment; }
    virtual bool nativeEventFilter(const QByteArray& eventType, void* message, long* result);

private slots:
    void sendAssignmentRequest();
    void readPendingDatagrams();
    void assignmentCompleted();
    void handleAuthenticationRequest();

private:
    Assignment _requestAssignment;
    static SharedAssignmentPointer _currentAssignment;
    QString _assignmentServerHostname;
};

#endif // hifi_AssignmentClient_h
