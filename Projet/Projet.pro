QT += widgets
QT += multimedia
QT += core gui
SOURCES += \
    jeu.cpp \
    main.cpp \
    menu.cpp

HEADERS += \
    jeu.h \
    menu.h \
    personnage.h \
    vaccine.h

FORMS += \
    jeu.ui \
    menu.ui

RESOURCES += \
    ress/images.qrc

DISTFILES += \
    ress/sounds.mp3

