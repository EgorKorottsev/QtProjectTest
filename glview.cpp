#include "glview.h"

GLView::GLView()
{
}

void GLView::initializeGL() {
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 800, 600, 0, 0, 1);
}

void GLView::resizeGL(int w, int h) {
    glViewport(0, 0, w, h);
}

void GLView::paintGL() {
    qglClearColor(Qt::darkCyan);
    qglColor(Qt::red);
    glBegin(GL_LINE_LOOP);
    glVertex2i(0, 0);
    glVertex2i(300, 300);
    glVertex2i(0, 300);
    glEnd();
}
