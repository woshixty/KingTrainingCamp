// -------------------------------------------------------
// kcalculatetool.h
// 创建者： xie tingyu
// 创建时间： 2022/5/27
// 功能描述： 提供计算表达式的功能接口
// Copyright 2013 Kingsoft
// --------------------------------------------------------
#ifndef _WEEK05_KCALCULATETOOL_H_
#define _WEEK05_KCALCULATETOOL_H_

#include <QString>
#include <string>

class KCalculateTool
{
public:
    using string = std::string;

    KCalculateTool();
    ~KCalculateTool();
    QString computeExpressing(string str);

private:
    void computing(char n, QStack<double> &operand);
    int out_operator(char ope);
    int in_operator(char ope);
};

#endif // KCALCULATETOOL_H
