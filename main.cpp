#include "opengl_widget.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication::setAttribute(Qt::ApplicationAttribute::AA_UseDesktopOpenGL);
    QApplication app(argc, argv);
    OpenGLWidget w;
    w.show();
    return app.exec();
}
