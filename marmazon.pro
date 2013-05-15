# -------------------------------------------------
# Project created by QtCreator 2010-02-17T10:56:53
# -------------------------------------------------
TEMPLATE = subdirs
SUBDIRS += utils

CONFIG += ordered

pcfile.files += marmazon.pc
pcfile.path = /usr/lib/pkgconfig

INSTALLS += pcfile
