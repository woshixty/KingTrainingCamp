#include "kShapeFactory.h"
#include <iostream>
#include <math.h>

using namespace std;

KTriangle* KShapeFactory::getTriangle(double a, double b, double c) 
{
    if (a + b > c && a + c > b && b + c > a)
    {
        return new KTriangle(a, b, c);
    }
    else
    {
        cout << "参数不合法" << endl;
        return new KTriangle();
    }
}

KSquare* KShapeFactory::getSquare(double side) 
{
    if(side > 0)
        return new KSquare(side);
    else
    {
        cout << "参数不合法" << endl;
        return new KSquare();
    }
}

KRectangle* KShapeFactory::getRectangle(double l, double w) 
{
    if(l > 0 && w > 0)
        return new KRectangle(l, w);
    else
    {
        cout << "参数不合法" << endl;
        return new KRectangle();
    }
}

KTrapezium* KShapeFactory::getTrapezium(double t, double b, double l, double r) 
{
    if(l + r > abs(t - b) && abs(l - r) < abs(t - b))
        return new KTrapezium(t, b, l, r);
    else
    {
        cout << "参数不合法" << endl;
        return new KTrapezium();
    }
}

KRound* KShapeFactory::getRound(double r) 
{
    if(r > 0)
        return new KRound(r);
    else
    {
        cout << "参数不合法" << endl;
        return new KRound();
    }
}
