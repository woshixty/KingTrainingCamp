// ------------------------------------------------------- 
// Square.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 正方形
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
