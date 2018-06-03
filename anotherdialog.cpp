#include "anotherdialog.h"
#include "ui_anotherdialog.h"

AnotherDialog::AnotherDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AnotherDialog)
{
    ui->setupUi(this);
}

AnotherDialog::~AnotherDialog()
{
    delete ui;
}
