#include "Round.h"
#include <iostream>

using namespace std;

Round::Round() : radius(0.0) {}

Round::Round(double r) : radius(r) {}

Round::Round(Shape* shape) {
    if (shape != nullptr && shape->type() == circle) {
        Round* p = dynamic_cast<Round*>(shape);
        radius = p->radius;
    }
    else {
        radius = 0.0;
        cout << "���Ͳ������ڹ���Round" << endl;
    }
}

Round::~Round() {}

double Round::perimeter() const {
    return 2 * radius * PI;
}

double Round::area() const {
    return PI * radius * radius;
}

ShapeType Round::type() const {
    return circle;
}
