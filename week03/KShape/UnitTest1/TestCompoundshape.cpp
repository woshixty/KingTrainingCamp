// ------------------------------------------------------- 
// TestCompoundshape.cpp 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 测试复合形状
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "../KShape/Shape.h"
#include "../KShape/Rectangle.h"
#include "../KShape/ShapeFactory.h"
#include "../KShape/Compoundshape.h"
#include "../KShape/CompoundshapeBuilder.h"
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
			CompoundshapeBuilder builder;
			ShapeFactory factory;
			// 构造长方形
			double l = 5, w = 6;
			Shape* rec = factory.getRectangle(l, w);
			// 构造圆形
			double r = 5;
			Shape* rou = factory.getRound(r);
			// 构造复合形状
			Shape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->area() + rou->area();
			double res = com->area();
			Assert::AreEqual(expected, res);
		}

		// 测试周长
		TEST_METHOD(TestPerimeter)
		{
			CompoundshapeBuilder builder;
			ShapeFactory factory;
			// 构造长方形
			double l = 5, w = 6;
			Shape* rec = factory.getRectangle(l, w);
			// 构造圆形
			double r = 5;
			Shape* rou = factory.getRound(r);
			// 构造复合形状
			Shape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->perimeter() + rou->perimeter();
			double res = com->perimeter();
			Assert::AreEqual(expected, res);
		}
	};
}