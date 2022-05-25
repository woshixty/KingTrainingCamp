#include "kCompoundshapeBuilder.h"
#include "kCompoundshape.h"

KCompoundshapeBuilder::KCompoundshapeBuilder() {}

KCompoundshapeBuilder::~KCompoundshapeBuilder() 
{
    for (auto iter = m_shapes.begin(); iter != m_shapes.end();) 
    {
        KShape* temp = *iter;
        iter++;
        delete temp;
    }
}

KCompoundshapeBuilder* KCompoundshapeBuilder::build(KShape* buildPara) 
{
    m_shapes.push_back(KCompoundshape::copyShape(buildPara));
    return this;
}

KShape* KCompoundshapeBuilder::getShape() 
{
    KCompoundshape* shape = new KCompoundshape();
    for (auto iter = m_shapes.begin(); iter != m_shapes.end(); iter++) 
    {
        shape->addShape(*iter);
    }
    return shape;
}
