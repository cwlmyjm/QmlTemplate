TEMPLATE = app

QT += qml quick
CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

SOURCES += main.cpp

HEADERS += 	header.h

RESOURCES += res/qml.qrc

INCLUDEPATH += third-party/easylogging++

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)
