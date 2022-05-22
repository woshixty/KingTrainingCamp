#include "pch.h"
#include "CppUnitTest.h"
#include "kMatrixMap.h"
#include "kMatrixIterator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace KTestMatrixMap
{
	TEST_CLASS(KTestMatrixMap)
	{
	public:
		
		TEST_METHOD(multiply)
		{
			// 
			KMatrixMap<int> matrix1(3, 1, 1);
			KMatrixMap<int> matrix2(1, 3, 1);
			KMatrixMap<int> right(3, 3, 1);
			bool result = right == matrix1 * matrix2;
			Assert::AreEqual(true, result);
		}
	};
}
