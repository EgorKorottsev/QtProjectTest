#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <anotherdialog.h>
#include "glview.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

protected:
    bool eventFilter(QObject *watched, QEvent *event);

private slots:
    void on_openFileAction_triggered();

    void on_closeFileAction_triggered();

    void on_newDialogButton_clicked();

private:
    Ui::MainWindow *ui;
    AnotherDialog *newDialog;
    GLView glView;
};

#endif // MAINWINDOW_H
