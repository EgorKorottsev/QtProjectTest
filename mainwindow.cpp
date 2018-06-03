#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>
#include <QKeyEvent>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    newDialog = new AnotherDialog();
    qApp->installEventFilter(this); //перехват событий главного окна
    glView.show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *watched, QEvent *event)
{
    if(event->type() == QEvent::KeyPress) {
        if(watched == ui->pushButton) {
            QKeyEvent *keyEvent = static_cast<QKeyEvent *>(event);
            if((keyEvent->key() == Qt::Key_0) && (keyEvent->modifiers() == Qt::AltModifier)) {
                QMessageBox::information(this, "Нажата кнопка 0", "Вот такой результат.");
            }
        }
    }

    QObject::eventFilter(watched, event);
}

void MainWindow::on_openFileAction_triggered()
{
    QMessageBox::information(this, "File information", "File was opened");
}

void MainWindow::on_closeFileAction_triggered()
{
    QApplication::quit();
}

void MainWindow::on_newDialogButton_clicked()
{
    newDialog->show();
}
