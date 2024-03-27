QT += core gui openglwidgets widgets xml

win32: LIBS += -lopengl32

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# disables all the APIs deprecated before Qt 6.0.0
DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000

SOURCES += \
    main.cpp \
    model.cpp \
    opengl_widget.cpp \
    vertex_buffers.cpp

HEADERS += \
    model.h \
    opengl_widget.h \
    vertex_buffers.h

RESOURCES += \
    assets.qrc
