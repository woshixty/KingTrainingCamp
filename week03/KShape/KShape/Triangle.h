// ------------------------------------------------------- 
// Triangle.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 三角形
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_TRIANGLE_H
#define CPPDESIGNPATTERNS_TRIANGLE_H

#include "Shape.h"

class Triangle : public Shape 
{
private:
    double sideA, sideB, sideC;
public:
    Triangle();

    Triangle(double a, double b, double c);

    Triangle(Shape* shape);

    ~Triangle();

    void setSides(double a, double b, double c);

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_TRIANGLE_H
