// ------------------------------------------------------- 
// Compoundshape.h 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ������״
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#ifndef CPPDESIGNPATTERNS_COMPOUNDSHAPE_H
#define CPPDESIGNPATTERNS_COMPOUNDSHAPE_H

#include "kShape.h"
#include "kRectangle.h"
#include "kTriangle.h"
#include "kTrapezium.h"
#include "kRound.h"
#include "kSquare.h"
#include <vector>

class KCompoundshape : public KShape 
{
private:
    std::vector<KShape*> m_shapes;
public:
    ~KCompoundshape();

    void addShape(KShape* shape);

    double perimeter() const override;

    double area() const override;

    ShapeType type() const override;

    static KShape* copyShape(KShape* shape) 
    {
        if (shape == nullptr) 
        {
            return nullptr;
        }
        KShape* point;
        switch (shape->type()) 
        {
        case rectangle:
            point = new KRectangle(shape);
            break;
        case circle:
            point = new KRound(shape);
            break;
        case square:
            point = new KSquare(shape);
            break;
        case trapezium:
            point = new KTrapezium(shape);
            break;
        case triangle:
            point = new KTriangle(shape);
            break;
        case compoundshape:
            point = new KCompoundshape();
            break;
        default:
            point = new KCompoundshape();
        }
        return point;
    }
};


#endif //CPPDESIGNPATTERNS_COMPOUNDSHAPE_H
