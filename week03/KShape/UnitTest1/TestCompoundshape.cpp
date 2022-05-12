// ------------------------------------------------------- 
// TestCompoundshape.cpp 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���Ը�����״
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
		// �������
		TEST_METHOD(TestArea)
		{
			CompoundshapeBuilder builder;
			ShapeFactory factory;
			// ���쳤����
			double l = 5, w = 6;
			Shape* rec = factory.getRectangle(l, w);
			// ����Բ��
			double r = 5;
			Shape* rou = factory.getRound(r);
			// ���츴����״
			Shape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->area() + rou->area();
			double res = com->area();
			Assert::AreEqual(expected, res);
		}

		// �����ܳ�
		TEST_METHOD(TestPerimeter)
		{
			CompoundshapeBuilder builder;
			ShapeFactory factory;
			// ���쳤����
			double l = 5, w = 6;
			Shape* rec = factory.getRectangle(l, w);
			// ����Բ��
			double r = 5;
			Shape* rou = factory.getRound(r);
			// ���츴����״
			Shape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->perimeter() + rou->perimeter();
			double res = com->perimeter();
			Assert::AreEqual(expected, res);
		}
	};
}