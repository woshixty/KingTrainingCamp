// ------------------------------------------------------- 
// Trapezium.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ����
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_TRAPEZIUM_H
#define CPPDESIGNPATTERNS_TRAPEZIUM_H


#include "kShape.h"

class KTrapezium : public KShape 
{
private:
    double m_top, m_bottom, m_left, m_right;
public:
    KTrapezium();

    KTrapezium(double t, double b, double l, double r);

    KTrapezium(KShape* shape);

    ~KTrapezium();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_TRAPEZIUM_H
