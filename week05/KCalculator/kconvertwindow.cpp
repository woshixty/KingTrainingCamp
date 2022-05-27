#include "kconvertwindow.h"
#include "ui_kconvertwindow.h"

KConvertWindow::KConvertWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::kConvertWindow)
{
    ui->setupUi(this);
    initDEC(false);
}

KConvertWindow::~KConvertWindow()
{
    delete ui;
}

void KConvertWindow::initHEX(bool flag)
{

}

void KConvertWindow::initDEC(bool flag)
{
    ui->m_btn_A->setEnabled(flag);
    ui->m_btn_B->setEnabled(flag);
    ui->m_btn_C->setEnabled(flag);
    ui->m_btn_D->setEnabled(flag);
    ui->m_btn_E->setEnabled(flag);
    ui->m_btn_F->setEnabled(flag);
}

void KConvertWindow::initOCT(bool flag)
{
    initDEC(flag);
    ui->m_btn_9->setEnabled(flag);
    ui->m_btn_8->setEnabled(flag);
}

void KConvertWindow::initBIN(bool flag)
{
    initOCT(flag);
    ui->m_btn_7->setEnabled(flag);
    ui->m_btn_6->setEnabled(flag);
    ui->m_btn_5->setEnabled(flag);
    ui->m_btn_4->setEnabled(flag);
    ui->m_btn_3->setEnabled(flag);
    ui->m_btn_2->setEnabled(flag);
}

void KConvertWindow::keepOnAll(bool flag)
{
    initBIN(flag);
}

BaseType KConvertWindow::getTheRadio()
{
    if(ui->radioButton_BIN->isChecked())
        return BIN;
    if(ui->radioButton_OCT->isChecked())
        return OCT;
    if(ui->radioButton_DEC->isChecked())
        return DEC;
    if(ui->radioButton_HEX->isChecked())
        return HEX;
    return HEX;
}

QLineEdit *KConvertWindow::getLineEdit()
{
    switch (getTheRadio())
    {
    case BIN:
        return ui->m_value_bin;
    case OCT:
        return ui->m_value_oct;
    case DEC:
        return ui->m_value_dec;
    case HEX:
        return ui->m_value_hex;
    default:
        return ui->m_value_hex;
    }
}

void KConvertWindow::writeLineEdit(QString str)
{
    QLineEdit *line = getLineEdit();
    line->insert(str);
}

void KConvertWindow::on_radioButton_HEX_clicked()
{
    keepOnAll(true);
}

void KConvertWindow::on_radioButton_DEC_clicked()
{
    keepOnAll(true);
    initDEC(false);
}

void KConvertWindow::on_radioButton_OCT_clicked()
{
    keepOnAll(true);
    initOCT(false);
}


void KConvertWindow::on_radioButton_BIN_clicked()
{
    keepOnAll(true);
    initBIN(false);
}

void KConvertWindow::on_m_btn_A_clicked()
{
    writeLineEdit("a");
}

void KConvertWindow::on_m_btn_B_clicked()
{
    writeLineEdit("b");
}

void KConvertWindow::on_m_btn_C_clicked()
{
    writeLineEdit("c");
}

void KConvertWindow::on_m_btn_D_clicked()
{
    writeLineEdit("d");
}

void KConvertWindow::on_m_btn_E_clicked()
{
    writeLineEdit("e");
}

void KConvertWindow::on_m_btn_F_clicked()
{
    writeLineEdit("f");
}

void KConvertWindow::on_m_btn_1_clicked()
{
    writeLineEdit("1");
}

void KConvertWindow::on_m_btn_2_clicked()
{
    writeLineEdit("2");
}

void KConvertWindow::on_m_btn_3_clicked()
{
    writeLineEdit("3");
}

void KConvertWindow::on_m_btn_4_clicked()
{
    writeLineEdit("4");
}

void KConvertWindow::on_m_btn_5_clicked()
{
    writeLineEdit("5");
}

void KConvertWindow::on_m_btn_6_clicked()
{
    writeLineEdit("6");
}

void KConvertWindow::on_m_btn_7_clicked()
{
    writeLineEdit("7");
}

void KConvertWindow::on_m_btn_8_clicked()
{
    writeLineEdit("8");
}

void KConvertWindow::on_m_btn_9_clicked()
{
    writeLineEdit("9");
}

void KConvertWindow::on_m_btn_back_clicked()
{
    getLineEdit()->backspace();
}

void KConvertWindow::on_m_btn_clear_clicked()
{
    getLineEdit()->clear();
}

void KConvertWindow::on_m_btn_answer_clicked()
{
    QString str = getLineEdit()->text();
    int base = getTheRadio();
    bool ok;
    int val = str.toInt(&ok, base);
    ui->m_value_bin->setText(QString::number(val, BIN));
    ui->m_value_oct->setText(QString::number(val, OCT));
    ui->m_value_dec->setText(QString::number(val, DEC));
    ui->m_value_hex->setText(QString::number(val, HEX));
}

void KConvertWindow::on_m_btn_dot_clicked()
{
    writeLineEdit(".");
}

void KConvertWindow::on_m_btn_left_move_clicked()
{
    QString str = getLineEdit()->text();
    int base = getTheRadio();
    bool ok;
    int val = str.toInt(&ok, base);
    val <<= 1;
    getLineEdit()->setText(QString::number(val, getTheRadio()));
}

void KConvertWindow::on_m_btn_right_move_clicked()
{
    QString str = getLineEdit()->text();
    int base = getTheRadio();
    bool ok;
    int val = str.toInt(&ok, base);
    val >>= 1;
    getLineEdit()->setText(QString::number(val, getTheRadio()));
}

void KConvertWindow::on_m_btn_aom_clicked()
{
    QString str = getLineEdit()->text();
    if(str.startsWith("-"))
        str = str.replace("-", "+");
    else if(str.startsWith("+"))
        str = str.replace("+", "-");
    else
        str = "-" + str;
    getLineEdit()->setText(str);
}
