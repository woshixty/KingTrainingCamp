// ------------------------------------------------------- 
// Round.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 圆形
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_ROUND_H
#define CPPDESIGNPATTERNS_ROUND_H

#include "kShape.h"
#include <math.h>

#define PI acos(-1)

class KRound : public KShape 
{
private:
    double m_radius;
public:
    KRound();

    KRound(double r);

    KRound(KShape* shape);

    ~KRound();

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;
};


#endif //CPPDESIGNPATTERNS_ROUND_H
