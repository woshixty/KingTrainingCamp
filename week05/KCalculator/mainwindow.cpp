#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"

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
