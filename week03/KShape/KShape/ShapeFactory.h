// ------------------------------------------------------- 
// ShapeFactory.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� Shape���칤����
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
