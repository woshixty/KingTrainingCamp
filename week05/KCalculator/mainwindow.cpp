#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include "ktools.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_m_value_0_clicked()
{
    ui->m_expression->insert("0");
}

void MainWindow::on_m_value_1_clicked()
{
    ui->m_expression->insert("1");
}

void MainWindow::on_m_value_2_clicked()
{
    ui->m_expression->insert("2");
}

void MainWindow::on_m_value_3_clicked()
{
    ui->m_expression->insert("3");
}

void MainWindow::on_m_value_4_clicked()
{
    ui->m_expression->insert("4");
}

void MainWindow::on_m_value_5_clicked()
{
    ui->m_expression->insert("5");
}

void MainWindow::on_m_value_6_clicked()
{
    ui->m_expression->insert("6");
}

void MainWindow::on_m_value_7_clicked()
{
    ui->m_expression->insert("7");
}

void MainWindow::on_m_value_8_clicked()
{
    ui->m_expression->insert("8");
}

void MainWindow::on_m_value_9_clicked()
{
    ui->m_expression->insert("9");
}


void MainWindow::on_m_button_ce_clicked()
{
    ui->m_expression->backspace();
}

void MainWindow::on_m_button_add_clicked()
{
    handleOperator(ui->m_expression, "+", this);
}

void MainWindow::on_m_button_minus_clicked()
{
    handleOperator(ui->m_expression, "-", this);
}

void MainWindow::on_m_button_multiply_clicked()
{
    handleOperator(ui->m_expression, "*", this);
}

void MainWindow::on_m_button_divide_clicked()
{
    handleOperator(ui->m_expression, "/", this);
}

void MainWindow::on_m_equal_clicked()
{
    double res = computeExpressing(ui->m_expression->text().toStdString());
    QString str = QString("%4").arg(res);
    ui->m_answer->setText(str);
}
