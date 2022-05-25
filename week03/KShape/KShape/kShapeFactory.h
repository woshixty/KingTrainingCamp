// ------------------------------------------------------- 
// ShapeFactory.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： Shape构造工厂类
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_SHAPEFACTORY_H
#define CPPDESIGNPATTERNS_SHAPEFACTORY_H

#include "kRectangle.h"
#include "kTriangle.h"
#include "kTrapezium.h"
#include "kRound.h"
#include "kSquare.h"

class KShapeFactory 
{
public:
    KTriangle* getTriangle(double a, double b, double c);

    KSquare* getSquare(double side);

    KRectangle* getRectangle(double l, double w);

    KTrapezium* getTrapezium(double t, double b, double l, double r);

    KRound* getRound(double r);
};


#endif //CPPDESIGNPATTERNS_SHAPEFACTORY_H
