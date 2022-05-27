// -------------------------------------------------------
// mainwindow.cpp
// 创建者： xie tingyu
// 创建时间： 2022/5/27
// 功能描述： 主窗口，实现基础的表达式运算功能
// Copyright 2013 Kingsoft
// --------------------------------------------------------
#include <QString>
#include <QMessageBox>
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "kconvertwindow.h"
#include "kcalculatetool.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    tool = new KCalculateTool();
}

MainWindow::~MainWindow()
{
    delete tool;
    delete ui;
}

/**
 * @brief handleOperator
 * @param line
 * @param ope
 * @param parent
 * 添加运算符并及进行相关检查，不允许连续的运算符
 */
void handleOperator(QLineEdit *line, QString ope, QMainWindow *parent)
{
    QString str = line->text();
    if(str.endsWith("+") || str.endsWith("-") || str.endsWith("/") || str.endsWith("*"))
        QMessageBox::critical (parent, "错误信息", "运算符冗余！");
    else
        line->insert(ope);
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
    QString str = ui->m_expression->text();
    // 去掉末尾运算符
    if(str.endsWith("+") || str.endsWith("-") || str.endsWith("/") || str.endsWith("*"))
        str = str.left(str.size() - 1);
    if(m_left_brackets != m_right_brackets)
    {
        QMessageBox::critical(this, "错误信息", "左右括号数量不等！");
        return;
    }
    QString res = tool->computeExpressing(str.toStdString());
    ui->m_answer->setText(res);
}

void MainWindow::on_m_left_bracket_clicked()
{
    m_left_brackets++;
    ui->m_expression->insert("(");
}

void MainWindow::on_m_clear_clicked()
{
    ui->m_expression->clear();
    ui->m_answer->clear();
    m_left_brackets = 0;
    m_right_brackets = 0;
}

void MainWindow::on_m_button_backstep_clicked()
{
    QString str = ui->m_expression->text();
    if(str.endsWith(")"))
        m_right_brackets--;
    if(str.endsWith("("))
        m_left_brackets--;
    ui->m_expression->backspace();
}

void MainWindow::on_m_right_bracket_clicked()
{
    if(m_left_brackets <= m_right_brackets)
    {
        QMessageBox::critical(this, "错误信息", "括号运算符添加异常！");
        return;
    }
    m_right_brackets++;
    ui->m_expression->insert(")");
}

void MainWindow::on_pushButton_clicked()
{
    KConvertWindow* window = new KConvertWindow();
    window->show();
}
