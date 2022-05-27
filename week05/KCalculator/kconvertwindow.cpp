#include "kconvertwindow.h"
#include "ui_kconvertwindow.h"

KConvertWindow::KConvertWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kConvertWindow)
{
    ui->setupUi(this);
}

KConvertWindow::~KConvertWindow()
{
    delete ui;
}
