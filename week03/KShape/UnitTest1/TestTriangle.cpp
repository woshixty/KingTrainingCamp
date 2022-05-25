// ------------------------------------------------------- 
// TestTriangle.cpp 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���������Σ�������������Է���һ��
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "../KShape/kShape.h"
#include "../KShape/kTriangle.h"
#include "../KShape/kShapeFactory.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestTriangle
{
	TEST_CLASS(TestTriangle)
	{
	public:
		TEST_METHOD(TestArea)
		{
			KShapeFactory shapeFactory;
			double a = 3, b = 4, c = 5;
			KShape* s = shapeFactory.getTriangle(a, b, c);
			double expected = a * b / 2;
			double res = s->area();
			Assert::AreEqual(expected, res);
		}

		TEST_METHOD(TestPerimeter)
		{
			KShapeFactory shapeFactory;
			double a = 3, b = 4, c = 5;
			KShape* s = shapeFactory.getTriangle(a, b, c);
			double expected = a + b + c;
			double res = s->perimeter();
			Assert::AreEqual(expected, res);
		}
	};
}