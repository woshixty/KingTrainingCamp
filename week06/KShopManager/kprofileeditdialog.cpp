#include "kprofileeditdialog.h"
#include "ui_kprofileeditdialog.h"

KProfileEditDialog::KProfileEditDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::KProfileEditDialog)
{
    ui->setupUi(this);
}

KProfileEditDialog::~KProfileEditDialog()
{
    delete ui;
}
