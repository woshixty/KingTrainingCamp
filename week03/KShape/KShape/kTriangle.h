// ------------------------------------------------------- 
// Triangle.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ������
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_TRIANGLE_H
#define CPPDESIGNPATTERNS_TRIANGLE_H

#include "kShape.h"

class KTriangle : public KShape 
{
private:
    double m_side_a, m_side_b, m_side_c;
public:
    KTriangle();

    KTriangle(double a, double b, double c);

    KTriangle(KShape* shape);

    ~KTriangle();

    void setSides(double a, double b, double c);

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_TRIANGLE_H
