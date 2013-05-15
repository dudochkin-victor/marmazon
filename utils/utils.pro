unix{
    PREFIX=/usr
    LIBDIR= $$PREFIX/lib
    INCLUDEDIR=$$PREFIX/include
}
include(../project.pri)
TEMPLATE = lib
TARGET = marmazonutils
DEPENDPATH += .
INCLUDEPATH += .
CONFIG += debug qdbus
# Input
HEADERS += stringutils.h
SOURCES += stringutils.cpp

target.path=$$LIBDIR

headers.files = $$HEADERS
headers.path = $$INCLUDEDIR/marmazon


INSTALLS += target \
    headers
