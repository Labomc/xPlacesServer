TEMPLATE = app
TARGET = xpServer
QT += core
HEADERS += MyServer.h
SOURCES += MyServer.cpp \
    main.cpp
FORMS += 
RESOURCES += 
QMAKE_INCDIR+=/usr/include/xplaces
QMAKE_LIBDIR+=/usr/lib/xplaces
LIBS+=-lxplaces