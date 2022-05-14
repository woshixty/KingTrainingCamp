#include "Square.h"
#include <iostream>

using namespace std;

Square::Square() : side(0.0) {}

Square::Square(double s) : side(s) {}

Square::Square(Shape* shape) 
{
    if (shape != nullptr && shape->type() == square) 
    {
        Square* p = dynamic_cast<Square*>(shape);
        side = p->side;
    }
    else 
    {
        side = 0.0;
        cout << "���Ͳ������ڹ���Square" << endl;
    }
}

Square::~Square() {}

double Square::perimeter() const 
{
    return 4 * side;
}

double Square::area() const 
{
    return side * side;
}

ShapeType Square::type() const 
{
    return square;
}
