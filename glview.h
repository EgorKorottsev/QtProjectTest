#ifndef GLVIEW_H
#define GLVIEW_H

#include <QGLWidget>

class GLView : public QGLWidget
{
public:
    GLView();
    void initializeGL() override;
    void resizeGL(int w, int h) override;
    void paintGL() override;
};

#endif // GLVIEW_H
