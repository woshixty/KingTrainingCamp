// ------------------------------------------------------- 
// Shape.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� �������
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
