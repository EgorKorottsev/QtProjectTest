#ifndef ANOTHERDIALOG_H
#define ANOTHERDIALOG_H

#include <QDialog>

namespace Ui {
class AnotherDialog;
}

class AnotherDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AnotherDialog(QWidget *parent = 0);
    ~AnotherDialog();

private:
    Ui::AnotherDialog *ui;
};

#endif // ANOTHERDIALOG_H
