// ------------------------------------------------------- 
// TestTriangle.cpp 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���������Σ�������������Է���һ��
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "../KShape/Shape.h"
#include "../KShape/Triangle.h"
#include "../KShape/ShapeFactory.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestTriangle
{
	TEST_CLASS(TestTriangle)
	{
	public:
		TEST_METHOD(TestArea)
		{
			ShapeFactory shapeFactory;
			double a = 3, b = 4, c = 5;
			Shape* s = shapeFactory.getTriangle(a, b, c);
			double expected = a * b / 2;
			double res = s->area();
			Assert::AreEqual(expected, res);
		}

		TEST_METHOD(TestPerimeter)
		{
			ShapeFactory shapeFactory;
			double a = 3, b = 4, c = 5;
			Shape* s = shapeFactory.getTriangle(a, b, c);
			double expected = a + b + c;
			double res = s->perimeter();
			Assert::AreEqual(expected, res);
		}
	};
}