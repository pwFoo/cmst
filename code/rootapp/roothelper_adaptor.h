/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -a roothelper_adaptor.h: roothelper/org.monkey_business_enterprises.roothelper.xml
 *
 * qdbusxml2cpp is Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef ROOTHELPER_ADAPTOR_H_1413732241
#define ROOTHELPER_ADAPTOR_H_1413732241

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
QT_BEGIN_NAMESPACE
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;
QT_END_NAMESPACE

/*
 * Adaptor class for interface org.cmst.roothelper
 */
class RoothelperAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "org.cmst.roothelper")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"org.cmst.roothelper\">\n"
"    <signal name=\"readCompleted\">\n"
"      <arg direction=\"out\" type=\"as\"/>\n"
"    </signal>\n"
"    <method name=\"startHelper\"/>\n"
"    <method name=\"getFileList\"/>\n"
"    <method name=\"saveFile\"/>\n"
"    <method name=\"isConnected\">\n"
"      <arg direction=\"out\" type=\"b\"/>\n"
"    </method>\n"
"  </interface>\n"
        "")
public:
    RoothelperAdaptor(QObject *parent);
    virtual ~RoothelperAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    void getFileList();
    bool isConnected();
    void saveFile();
    void startHelper();
Q_SIGNALS: // SIGNALS
    void readCompleted(const QStringList &in0);
};

#endif
