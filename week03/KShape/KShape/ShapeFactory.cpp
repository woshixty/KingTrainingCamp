#include "ShapeFactory.h"
#include <iostream>
#include <math.h>

using namespace std;

Triangle* ShapeFactory::getTriangle(double a, double b, double c) 
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return new Triangle(a, b, c);
    }
    else
    {
        cout << "�������Ϸ�" << endl;
        return new Triangle();
    }
}

Square* ShapeFactory::getSquare(double side) 
{
    if(side > 0)
        return new Square(side);
    else
    {
        cout << "�������Ϸ�" << endl;
        return new Square();
    }
}

Rectangle* ShapeFactory::getRectangle(double l, double w) 
{
    if(l > 0 && w > 0)
        return new Rectangle(l, w);
    else
    {
        cout << "�������Ϸ�" << endl;
        return new Rectangle();
    }
}

Trapezium* ShapeFactory::getTrapezium(double t, double b, double l, double r) 
{
    if(l + r > abs(t - b) && abs(l - r) < abs(t - b))
        return new Trapezium(t, b, l, r);
    else
    {
        cout << "�������Ϸ�" << endl;
        return new Trapezium();
    }
}

Round* ShapeFactory::getRound(double r) 
{
    if(r > 0)
        return new Round(r);
    else
    {
        cout << "�������Ϸ�" << endl;
        return new Round();
    }
}
