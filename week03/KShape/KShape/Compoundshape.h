// ------------------------------------------------------- 
// Compoundshape.h 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 复合形状
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_COMPOUNDSHAPE_H
#define CPPDESIGNPATTERNS_COMPOUNDSHAPE_H

#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include "Trapezium.h"
#include "Round.h"
#include "Square.h"
#include <vector>

class Compoundshape : public Shape 
{
private:
    std::vector<Shape*> shapes;
public:
    ~Compoundshape();

    void addShape(Shape* shape);

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;

    static Shape* copyShape(Shape* shape) 
    {
        if (shape == nullptr) 
        {
            return nullptr;
        }
        Shape* point;
        switch (shape->type()) 
        {
        case rectangle:
            point = new Rectangle(shape);
            break;
        case circle:
            point = new Round(shape);
            break;
        case square:
            point = new Square(shape);
            break;
        case trapezium:
            point = new Trapezium(shape);
            break;
        case triangle:
            point = new Triangle(shape);
            break;
        case compoundshape:
            point = new Compoundshape();
            break;
        default:
            point = new Compoundshape();
        }
        return point;
    }
};


#endif //CPPDESIGNPATTERNS_COMPOUNDSHAPE_H
