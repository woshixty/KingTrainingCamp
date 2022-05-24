// -------------------------------------------------------
// KTestVectorMatrix.cpp
// �����ߣ� xie tingyu
// ����ʱ�䣺 2022/5/21
// ���������� ����vector������ع���
// Copyright 2013 Kingsoft
// --------------------------------------------------------
#include "pch.h"
#include "CppUnitTest.h"
#include "kMatrixVector.h"
#include "kMatrixBuilder.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KTestMatrixVector
{
	TEST_CLASS(KTestMatrixVector)
	{
	public:
		KMatrixBuilder<double>* builder = new KMatrixBuilder<double>(3, 4);
		TEST_METHOD(multiply)
		{
			// ���Ծ���˷�==
			KMatrixVector<int> matrix1(4, 1, 1);
			KMatrixVector<int> matrix2(1, 4, 1);
			KMatrixVector<int> right(1, 1, 4);
			bool result = right == matrix2 * matrix1;
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(iterator)
		{
			// ���Ծ����������ɾ�����С�����dataֵ
			KMatrixVector<int> matrix(3, 4);
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
