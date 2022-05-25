// ------------------------------------------------------- 
// Shape.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 抽象基类
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_SHAPE_H
#define CPPDESIGNPATTERNS_SHAPE_H

enum ShapeType 
{
    triangle, square, rectangle, trapezium, circle, compoundshape
};

class KShape 
{
public:
    virtual double perimeter() const = 0;

    virtual double area() const = 0;

    virtual ShapeType type() const = 0;
};


#endif //CPPDESIGNPATTERNS_SHAPE_H once
