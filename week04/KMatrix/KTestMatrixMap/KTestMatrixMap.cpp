// -------------------------------------------------------
// KTestMapMatrix.cpp
// �����ߣ� xie tingyu
// ����ʱ�䣺 2022/5/21
// ���������� ����map������ع���
// Copyright 2013 Kingsoft
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "kMatrixMap.h"
#include "kMatrixIterator.h"
#include "kMatrixBuilder.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KTestMatrixMap
{
	TEST_CLASS(KTestMatrixMap)
	{
	public:
		TEST_METHOD(multiply)
		{
			// ���Ծ���˷�
			KMatrixMap<int> matrix1(3, 1, 1);
			KMatrixMap<int> matrix2(1, 3, 1);
			KMatrixMap<int> right(3, 3, 1);
			bool result = right == matrix1 * matrix2;
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(addAndMinus)
		{
			// ���Ծ���ӷ�����������
			KMatrixBuilder<double>* builder = new KMatrixBuilder<double>(3, 4);
			KMatrixMap<double> matrix1 = builder->buildMapMatrix(0 ,0, 5)
				->buildMapMatrix(2, 2, 2)
				->getMapMatrix();
			KMatrixMap<double> matrix2(3, 4, 1);
			KMatrixMap<double> matrix3(3, 4, 1);
			KMatrixMap<double> right(3, 4);
			right.setData(0, 0, 5);
			right.setData(2, 2, 2);
			bool result = right == matrix1 + matrix2 - matrix3;
			Assert::AreEqual(true, result);
		}

		// ����ת��
		TEST_METHOD(transpose)
		{
			int arr[4] = { 1, 2, 3, 4 };
			KMatrixMap<int> matrix1(4, 1, arr);
			KMatrixMap<int> matrix2(1, 4, arr);
			bool result = matrix1 == matrix2.transpose();
		}
	};
}
