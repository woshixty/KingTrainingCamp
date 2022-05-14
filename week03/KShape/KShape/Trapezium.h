// ------------------------------------------------------- 
// Trapezium.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 梯形
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_TRAPEZIUM_H
#define CPPDESIGNPATTERNS_TRAPEZIUM_H


#include "Shape.h"

class Trapezium : public Shape 
{
private:
    double top, bottom, left, right;
public:
    Trapezium();

    Trapezium(double t, double b, double l, double r);

    Trapezium(Shape* shape);

    ~Trapezium();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_TRAPEZIUM_H
