#pragma once

// system & C++ header
#include <iostream>
#include <memory>
#include <functional>
#include <string>

// qt header
#include <QObject>
#include <QApplication>
#include <QCoreApplication>
#include <QQmlEngine>
#include <QQmlComponent>
#include <QQmlContext>
#include <QQuickWindow>
#include <QPoint>
#include <QMouseEvent>
#include <QTimer>
#include <QQuickItem>
#include <QImage>
#include <QQuickWindow>
#include <QQuickRenderControl>
#include <QOffscreenSurface>
#include <QOpenGLContext>
#include <QOpenGLFramebufferObject>
#include <QOpenGLExtraFunctions>
#include <QDir>
#include <QMessageBox>
#include <QTextCodec>
#include <QProcess>
#include <QDateTime>

// easylogging includes
#ifndef _DEBUG
#define _DEBUG
#define ELPP_THREAD_SAFE
#define ELPP_QT_LOGGING
#define ELPP_NO_DEFAULT_LOG_FILE
#include <easylogging++.h>
#undef _DEBUG
#else
#define ELPP_THREAD_SAFE
#define ELPP_QT_LOGGING
#define ELPP_NO_DEFAULT_LOG_FILE
#include <easylogging++.h>
#endif


