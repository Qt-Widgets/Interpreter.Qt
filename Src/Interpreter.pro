#
# Interpreter.pro
#

TARGET = interpreter 
TEMPLATE = app

CONFIG += console
CONFIG -= app_bundle
CONFIG += c++11

DEFINES += QT_DEPRECATED_WARNINGS

HEADERS += \
Context.h \
Expression.h \
Program.h \
Statement.h  \
StringTokenizer.h  \
SyntaxError.h \
Token.h	   

SOURCES += \
Context.cpp  \
Expression.cpp  \
Interpreter.cpp  \
Program.cpp  \
Statement.cpp  \
StringTokenizer.cpp


