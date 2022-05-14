// ------------------------------------------------------- 
// Rectangle.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 长方形
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_RECTANGLE_H
#define CPPDESIGNPATTERNS_RECTANGLE_H

#include "Shape.h"

class Rectangle : public Shape 
{
private:
    double length, width;
public:
    Rectangle();

    Rectangle(double l, double w);

    Rectangle(Shape* shape);

    ~Rectangle();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_RECTANGLE_H
