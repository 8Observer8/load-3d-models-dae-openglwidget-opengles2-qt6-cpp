#ifndef OPENGL_WIDGET_H
#define OPENGL_WIDGET_H

#include <QtGui/QCloseEvent>
#include <QtGui/QKeyEvent>
#include <QtGui/QMatrix4x4>
#include <QtGui/QOpenGLFunctions>
#include <QtOpenGL/QOpenGLShaderProgram>
#include <QtOpenGLWidgets/QOpenGLWidget>

#include "model.h"

class OpenGLWidget : public QOpenGLWidget, private QOpenGLFunctions
{
public:
    OpenGLWidget();
    ~OpenGLWidget();

private:
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
    void closeEvent(QCloseEvent *event) override;

private:
    QOpenGLShaderProgram *m_pProgram;
    QMatrix4x4 m_projViewMatrix;
    QMatrix4x4 m_projMatrix;
    QMatrix4x4 m_viewMatrix;
    Model *m_pHouse;
    Model *m_pNiva;
};

#endif // OPENGL_WIDGET_H
