// ------------------------------------------------------- 
// TestCompoundshape.cpp 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 测试复合形状
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "../KShape/kShape.h"
#include "../KShape/kRectangle.h"
#include "../KShape/kShapeFactory.h"
#include "../KShape/kCompoundshape.h"
#include "../KShape/kCompoundshapeBuilder.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestCompoundshape
{
	TEST_CLASS(TestCompoundshape)
	{
	public:
		// 测试面积
		TEST_METHOD(TestArea)
		{
			KCompoundshapeBuilder builder;
			KShapeFactory factory;
			// 构造长方形
			double l = 5, w = 6;
			KShape* rec = factory.getRectangle(l, w);
			// 构造圆形
			double r = 5;
			KShape* rou = factory.getRound(r);
			// 构造复合形状
			KShape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->area() + rou->area();
			double res = com->area();
			Assert::AreEqual(expected, res);
		}

		// 测试周长
		TEST_METHOD(TestPerimeter)
		{
			KCompoundshapeBuilder builder;
			KShapeFactory factory;
			// 构造长方形
			double l = 5, w = 6;
			KShape* rec = factory.getRectangle(l, w);
			// 构造圆形
			double r = 5;
			KShape* rou = factory.getRound(r);
			// 构造复合形状
			KShape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->perimeter() + rou->perimeter();
			double res = com->perimeter();
			Assert::AreEqual(expected, res);
		}
	};
}