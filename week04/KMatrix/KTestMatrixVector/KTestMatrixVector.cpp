// -------------------------------------------------------
// KTestVectorMatrix.cpp
// 创建者： xie tingyu
// 创建时间： 2022/5/21
// 功能描述： 测试vector矩阵相关功能
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
		KMatrixBuilder<int>* builder = new KMatrixBuilder<int>(3, 4);
		TEST_METHOD(multiply)
		{
			// 测试矩阵乘法和==
			KMatrixVector<int> matrix1(4, 1, 1);
			KMatrixVector<int> matrix2(1, 4, 1);
			KMatrixVector<int> right(1, 1, 4);
			bool result = right == matrix2 * matrix1;
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(addAndMinus)
		{
			// 测试矩阵加法减法建造者
			KMatrixBuilder<int>* builder = new KMatrixBuilder<int>(3, 4);
			KMatrixVector<int> matrix1 = builder->buildVectorMatrix(0, 0, 5)
				->buildVectorMatrix(2, 2, 2)
				->getVectorMatrix();
			KMatrixVector<int> matrix2(3, 4, 1);
			KMatrixVector<int> matrix3(3, 4, 1);
			KMatrixVector<int> right(3, 4);
			right.setData(0, 0, 5);
			right.setData(2, 2, 2);
			bool result = right == matrix1 + matrix2 - matrix3;
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(transpose)
		{
			// 测试转置
			int arr[4] = { 1, 2, 3, 4 };
			KMatrixVector<int> matrix1(4, 1, arr);
			KMatrixVector<int> matrix2(1, 4, arr);
			bool result = matrix1 == matrix2.transpose();
			Assert::AreEqual(true, result);
		}

		TEST_METHOD(iterator)
		{
			// 测试矩阵迭代器、删除行列、设置data值
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
