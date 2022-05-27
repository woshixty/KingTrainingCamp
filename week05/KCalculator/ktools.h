#ifndef KTOOLS_H
#define KTOOLS_H
#include <iostream>
#include <string>
#include <QChar>
#include <QStack>
#include <QString>
#include <QLineEdit>
#include <QMainWindow>
#include <QMessageBox>

using string = std::string;

//void handleOperator(QLineEdit *line, QString &ope, QMainWindow *parent);
//int out_operator(char ope);
//int in_operator(char ope);
//void computing(char n, QStack<double> &operand);
//double computeExpressing(QString &str);

void handleOperator(QLineEdit *line, QString ope, QMainWindow *parent)
{
    QString str = line->text();
    if(str.endsWith("+") || str.endsWith("-") || str.endsWith("/") || str.endsWith("*"))
        QMessageBox::critical (parent, "错误信息", "运算符冗余！");
    else
        line->insert(ope);
}

int out_operator(char ope)
{
    switch (ope)
    {
        case ')':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '(':
            return 3;
        default:
            return -1;
    }
}

int in_operator(char ope)
{
    switch (ope)
    {
        case '(':
            return 0;
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        default:
            return -1;
    }
}

void computing(char n, QStack<double> &operand)
{
    double a = operand.top();
    operand.pop();
    double b = operand.top();
    operand.pop();
    if (n == '+')
        operand.push(a + b);
    else if (n == '-')
        operand.push(b - a);
    if (n == '*')
        operand.push(a * b);
    else if (n == '/')
        operand.push(b / a);
}

QString computeExpressing(string str)
{
    QStack<char> operatorStack;
    QStack<double> operandStack;
    bool flag = false;
    double currValue = 0;
    for (size_t i = 0; i < str.size(); ++i)
    {
        if ('0' <= str.at(i) && str.at(i) <= '9')
        {
            currValue = currValue * 10 + double(str.at(i) - '0');
            flag = true;
        }
        else if (flag)
        {
            flag = false;
            operandStack.push(currValue);
            currValue = 0;
        }
        switch (str.at(i))
        {
            case ')':
            {
                while (operatorStack.top() != '(')
                {
                    computing(operatorStack.top(), operandStack);
                    operatorStack.pop();
                }
                operatorStack.pop();
                break;
            }
            case '(':
                operatorStack.push(str.at(i));
                break;
            case '+':
            case '-':
            case '*':
            case '/':
            {
                if (!operatorStack.empty())
                    while (in_operator(operatorStack.top()) >= out_operator(str.at(i)))
                    {
                        computing(operatorStack.top(), operandStack);
                        operatorStack.pop();
                        if (operatorStack.empty())
                            break;
                    }
                operatorStack.push(str.at(i));
            }
        }
    }
    if (flag)
        operandStack.push(currValue);
    while (!operatorStack.empty())
    {
        computing(operatorStack.top(), operandStack);
        operatorStack.pop();
    }
    return QString("%4").arg(operandStack.top());
}


#endif // KTOOLS_H
