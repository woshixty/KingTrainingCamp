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
		KMatrixBuilder<int>* builder = new KMatrixBuilder<int>(3, 4);
		TEST_METHOD(multiply)
		{
			// ���Ծ���˷���==
			KMatrixMap<int> matrix1(4, 1, 1);
			KMatrixMap<int> matrix2(1, 4, 1);
			KMatrixMap<int> right(1, 1, 4);
			bool result = right == matrix2 * matrix1;
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(addAndMinus)
		{
			// ���Ծ���ӷ�����������
			KMatrixBuilder<int>* builder = new KMatrixBuilder<int>(3, 4);
			KMatrixMap<int> matrix1 = builder->buildMapMatrix(0 ,0, 5)
				->buildMapMatrix(2, 2, 2)
				->getMapMatrix();
			KMatrixMap<int> matrix2(3, 4, 1);
			KMatrixMap<int> matrix3(3, 4, 1);
			KMatrixMap<int> right(3, 4);
			right.setData(0, 0, 5);
			right.setData(2, 2, 2);
			bool result = right == matrix1 + matrix2 - matrix3;
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(transpose)
		{
			// ����ת��
			int arr[4] = { 1, 2, 3, 4 };
			KMatrixMap<int> matrix1(4, 1, arr);
			KMatrixMap<int> matrix2(1, 4, arr);
			bool result = matrix1 == matrix2.transpose();
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(iterator)
		{
			// ���Ծ����������ɾ�����С�����dataֵ
			KMatrixMap<int> matrix(3, 4);
			int data = 1;
			for (size_t i = 0; i < 3; i++)
			{
				for (size_t j = 0; j < 4; j++)
				{
					matrix.setData(i, j, data++);
				}
			}
			matrix.eraseRow(0);
			matrix.eraseColumns(0);
			int result[6] = { 6, 7, 8, 10, 11, 12 };
			KMatrixIterator<int> it = matrix.begin();
			for (int i = 0; it != matrix.end(); ++it, ++i) {
				Assert::AreEqual(result[i], it.get());
			}
		}
	};
}
