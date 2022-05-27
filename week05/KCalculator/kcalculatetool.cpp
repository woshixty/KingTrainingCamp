// -------------------------------------------------------
// kcalculatetool.cpp
// 创建者： xie tingyu
// 创建时间： 2022/5/27
// 功能描述： 工具类功能接口定义
// Copyright 2013 Kingsoft
// --------------------------------------------------------

#include "kcalculatetool.h"
#include <QStack>

KCalculateTool::KCalculateTool()
{

}

KCalculateTool::~KCalculateTool()
{

}

/**
 * 传入计算表达式返回计算结果
 * @brief KTools::computeExpressing
 * @param str 使用string的原因是字符相加减QString是QChar
 * @return
 */
QString KCalculateTool::computeExpressing(string str)
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
                // 直到遇到 (
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

int KCalculateTool::in_operator(char ope)
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

int KCalculateTool::out_operator(char ope)
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

void KCalculateTool::computing(char n, QStack<double> &operand)
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
