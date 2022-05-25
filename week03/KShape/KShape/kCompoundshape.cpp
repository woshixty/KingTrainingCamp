#include "kCompoundshape.h"
#include <vector>

using namespace std;

void KCompoundshape::addShape(KShape* shape) 
{
    KShape* point = copyShape(shape);
    m_shapes.push_back(point);
}

double KCompoundshape::perimeter() const 
{
    double perimeter = 0.0;
    for (auto iter = m_shapes.begin(); iter != m_shapes.end(); iter++) 
    {
        perimeter += (*iter)->perimeter();
    }
    return perimeter;
}

double KCompoundshape::area() const 
{
    double area = 0.0;
    for (auto iter = m_shapes.begin(); iter != m_shapes.end(); iter++) 
    {
        area += (*iter)->area();
    }
    return area;
}

ShapeType KCompoundshape::type() const 
{
    return compoundshape;
}

KCompoundshape::~KCompoundshape() 
{
    for (auto iter = m_shapes.begin(); iter != m_shapes.end();) 
    {
        KShape* temp = *iter;
        iter++;
        delete temp;
    }
}
