QT += core gui charts svg
QT += network
QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    gansdata.cpp \
    graphform.cpp \
    main.cpp \
    mapgidroform.cpp \
    modelmodem.cpp \
    moveauv.cpp \
    widget.cpp \
    Math_uWave/readerjson.cpp \
    Math_uWave/sensormove.cpp \
    Math_uWave/signalpropagation.cpp\
    Connection/qpiconfig.cpp

HEADERS += \
    Connection/protocol.h \
    Connection/pc_protocol.h \
    Connection/udp_protocol.h \
    Connection/qpiconfig.h \
    CustomScatterSeries.h \
    gansdata.h \
    graphform.h \
    mapgidroform.h \
    modelmodem.h \
    moveauv.h \
    widget.h \
    Math_uWave/readerjson.h \
    Math_uWave/sensormove.h \
    Math_uWave/signalpropagation.h \
    Math_uWave/stucturs.h \
    Math_uWave/sensor_uwave.h


FORMS += \
    graphform.ui \
    mapgidroform.ui \
    widget.ui

INCLUDEPATH += $$PWD/Math_uWave/include

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

DISTFILES += \
    pictures/love_11064467.png \
    pictures/octopus_11064758.png \
    pictures/stingray_11064643.png \
    pictures/superhero_2503243.png

RESOURCES += \
    resource/dark.qrc
