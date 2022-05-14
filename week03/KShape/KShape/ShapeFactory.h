// ------------------------------------------------------- 
// ShapeFactory.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： Shape构造工厂类
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_SHAPEFACTORY_H
#define CPPDESIGNPATTERNS_SHAPEFACTORY_H

#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezium.h"
#include "Round.h"
#include "Square.h"

class ShapeFactory 
{
public:
    Triangle* getTriangle(double a, double b, double c);

    Square* getSquare(double side);

    Rectangle* getRectangle(double l, double w);

    Trapezium* getTrapezium(double t, double b, double l, double r);

    Round* getRound(double r);
};


#endif //CPPDESIGNPATTERNS_SHAPEFACTORY_H
