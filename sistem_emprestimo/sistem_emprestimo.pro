QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    create_new_user.cpp \
    insert_filme.cpp \
    main.cpp \
    janelalogin.cpp \
    pesquisar_filmes.cpp \
    tela_inicial.cpp

HEADERS += \
    create_new_user.h \
    insert_filme.h \
    janelalogin.h \
    pesquisar_filmes.h \
    tela_inicial.h

FORMS += \
    create_new_user.ui \
    insert_filme.ui \
    janelalogin.ui \
    pesquisar_filmes.ui \
    tela_inicial.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
