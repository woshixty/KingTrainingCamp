// ------------------------------------------------------- 
// Round.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 圆形
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_ROUND_H
#define CPPDESIGNPATTERNS_ROUND_H

#include "Shape.h"
#include <math.h>

#define PI acos(-1)

class Round : public Shape 
{
private:
    double radius;
public:
    Round();

    Round(double r);

    Round(Shape* shape);

    ~Round();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_ROUND_H
