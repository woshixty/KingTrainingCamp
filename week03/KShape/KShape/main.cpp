#include "kShape.h"
#include "kRectangle.h"
#include "kTriangle.h"
#include "kTrapezium.h"
#include "kRound.h"
#include "kSquare.h"
#include "kCompoundshape.h"
#include "kCompoundshapeBuilder.h"
#include "kShapeFactory.h"
#include <iostream>

using namespace std;

int main() 
{
    KShapeFactory shapeFactory;

    cout << "Rectangle" << endl;
    KShape* rectangle = shapeFactory.getRectangle(3, 3);
    cout << rectangle->area() << endl;
    cout << rectangle->perimeter() << endl;
    cout << rectangle->type() << endl;
    cout << "--------------------------------" << endl;

    cout << "Square" << endl;
    KShape* square = shapeFactory.getSquare(3);
    cout << square->area() << endl;
    cout << square->perimeter() << endl;
    cout << square->type() << endl;
    cout << "--------------------------------" << endl;

    cout << "Triangle" << endl;
    KShape* triangle = shapeFactory.getTriangle(3, 4, 5);
    cout << triangle->area() << endl;
    cout << triangle->perimeter() << endl;
    cout << triangle->type() << endl;
    cout << "--------------------------------" << endl;

    cout << "Trapezium" << endl;
    KShape* trapezium = new KTrapezium(3, 11, 5, 5);
    cout << trapezium->area() << endl;
    cout << trapezium->perimeter() << endl;
    cout << trapezium->type() << endl;
    cout << "--------------------------------" << endl;

    cout << "Round" << endl;
    KShape* round = new KRound(3);
    cout << round->area() << endl;
    cout << round->perimeter() << endl;
    cout << round->type() << endl;
    cout << "--------------------------------" << endl;

    cout << "Compoundshape" << endl;
    KCompoundshape* compoundshape = new KCompoundshape();
    compoundshape->addShape(rectangle);
    compoundshape->addShape(square);
    compoundshape->addShape(triangle);
    cout << compoundshape->area() << endl;
    cout << compoundshape->perimeter() << endl;
    cout << compoundshape->type() << endl;
    cout << "--------------------------------" << endl;

    cout << "CompoundshapeBuilder" << endl;
    KCompoundshapeBuilder* builder = new KCompoundshapeBuilder();
    KShape* builderShape = builder->build(rectangle)->build(square)->build(triangle)->getShape();
    cout << builderShape->area() << endl;
    cout << builderShape->perimeter() << endl;
    cout << builderShape->type() << endl;
    cout << "--------------------------------" << endl;
}