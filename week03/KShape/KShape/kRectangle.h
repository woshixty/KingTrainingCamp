// ------------------------------------------------------- 
// Rectangle.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ������
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_RECTANGLE_H
#define CPPDESIGNPATTERNS_RECTANGLE_H

#include "kShape.h"

class KRectangle : public KShape 
{
private:
    double m_length, m_width;
public:
    KRectangle();

    KRectangle(double l, double w);

    KRectangle(KShape* shape);

    ~KRectangle();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_RECTANGLE_H
