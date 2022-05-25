// ------------------------------------------------------- 
// TestCompoundshape.cpp 
// �����ߣ� xty
// ����ʱ�䣺 2022/5/11 
// ���������� ���Ը�����״
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
		// �������
		TEST_METHOD(TestArea)
		{
			KCompoundshapeBuilder builder;
			KShapeFactory factory;
			// ���쳤����
			double l = 5, w = 6;
			KShape* rec = factory.getRectangle(l, w);
			// ����Բ��
			double r = 5;
			KShape* rou = factory.getRound(r);
			// ���츴����״
			KShape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->area() + rou->area();
			double res = com->area();
			Assert::AreEqual(expected, res);
		}

		// �����ܳ�
		TEST_METHOD(TestPerimeter)
		{
			KCompoundshapeBuilder builder;
			KShapeFactory factory;
			// ���쳤����
			double l = 5, w = 6;
			KShape* rec = factory.getRectangle(l, w);
			// ����Բ��
			double r = 5;
			KShape* rou = factory.getRound(r);
			// ���츴����״
			KShape* com = builder.build(rec)->build(rou)->getShape();
			double expected = rec->perimeter() + rou->perimeter();
			double res = com->perimeter();
			Assert::AreEqual(expected, res);
		}
	};
}