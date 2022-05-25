// ------------------------------------------------------- 
// TestRectangle.cpp 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���Գ����Σ�������������Է���һ��
// Copyright 2022 Kingsoft 
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "../KShape/kShape.h"
#include "../KShape/kRectangle.h"
#include "../KShape/kShapeFactory.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace TestRectangle
{
	TEST_CLASS(TestRectangle)
	{
	public:
		TEST_METHOD(TestArea)
		{
			KShapeFactory shapeFactory;
			double l = 4, w = 7;
			KShape* s = shapeFactory.getRectangle(l, w);
			double area = s->area();
			Assert::AreEqual(l * w, area);
		}
		TEST_METHOD(TestPerimeter)
		{
			KShapeFactory shapeFactory;
			double l = 4, w = 7;
			KShape* s = shapeFactory.getRectangle(l, w);
			double perimeter = s->perimeter();
			Assert::AreEqual(2 * (l + w), perimeter);
		}
	};
}