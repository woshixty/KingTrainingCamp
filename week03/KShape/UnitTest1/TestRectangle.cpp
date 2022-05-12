// ------------------------------------------------------- 
// TestRectangle.cpp 
// 创建者： xty
// 创建时间： 2022/5/11 
// 功能描述： 测试长方形，其余派生类测试方法一致
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "../KShape/Shape.h"
#include "../KShape/Rectangle.h"
#include "../KShape/ShapeFactory.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRectangle
{
	TEST_CLASS(TestRectangle)
	{
	public:
		TEST_METHOD(TestArea)
		{
			ShapeFactory shapeFactory;
			double l = 4, w = 7;
			Shape* s = shapeFactory.getRectangle(l, w);
			double area = s->area();
			Assert::AreEqual(l * w, area);
		}
		TEST_METHOD(TestPerimeter)
		{
			ShapeFactory shapeFactory;
			double l = 4, w = 7;
			Shape* s = shapeFactory.getRectangle(l, w);
			double perimeter = s->perimeter();
			Assert::AreEqual(2 * (l + w), perimeter);
		}
	};
}