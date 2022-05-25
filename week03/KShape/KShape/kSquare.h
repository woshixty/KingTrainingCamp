// ------------------------------------------------------- 
// Square.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ������
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_SQUARE_H
#define CPPDESIGNPATTERNS_SQUARE_H

#include "kShape.h"

class KSquare : public KShape 
{
private:
    double m_side;
public:
    KSquare();

    KSquare(double s);

    KSquare(KShape* shape);

    ~KSquare();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_SQUARE_H
