// -------------------------------------------------------
// main.cpp
// 创建者： xie tingyu
// 创建时间： 2022/5/27
// 功能描述： 入口函数，进行内存泄露检测
// Copyright 2013 Kingsoft
// --------------------------------------------------------
#define _CRTDBG_MAP_ALLOC
#include <stdlib.h>
#include <crtdbg.h>
#include <QDebug>
#include <QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int res = a.exec();
    int leaks = _CrtDumpMemoryLeaks();
    qDebug() << "内存泄露：" << leaks << endl;
    return res;
}
