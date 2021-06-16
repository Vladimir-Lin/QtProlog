NAME         = QtProlog
TARGET       = $${NAME}
QT           = core
QT          -= gui
QT          += network
CONFIG(static,static|shared) {
# static version does not support Qt Script now
QT          -= script
} else {
QT          += script
}

load(qt_build_config)
load(qt_module)

INCLUDEPATH += $${PWD}/../../include/QtProlog

HEADERS     += $${PWD}/../../include/QtProlog/qtprolog.h
# HEADERS     += $${PWD}/nPrologInternal.h

SOURCES     += $${PWD}/nProlog.cpp
# SOURCES     += $${PWD}/nPrologInternal.cpp

OTHER_FILES += $${PWD}/../../include/$${NAME}/headers.pri

include ($${PWD}/../../doc/Qt/Qt.pri)

TRNAME       = $${NAME}
include ($${PWD}/../../Translations.pri)
