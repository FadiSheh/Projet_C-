QT += widgets
QT += multimedia
QT += core gui
SOURCES += \
    jeu.cpp \
    main.cpp \
    menu.cpp

HEADERS += \
    Bar.h \
    Bus.h \
    Cinema.h \
    Course.h \
    Entreprise.h \
    Loisir.h \
    Metro.h \
    NonVaccine.h \
    Pharmacie.h \
    SalleDeSport.h \
    Supermarche.h \
    Transport.h \
    Travail.h \
    Universite.h \
    Vaccine.h \
    jeu.h \
    lieu.h \
    menu.h \
    personnage.h

FORMS += \
    jeu.ui \
    menu.ui

RESOURCES += \
    ress/images.qrc

DISTFILES += \
    ress/bus-door-open-01.mp3 \
    ress/sounds.mp3

