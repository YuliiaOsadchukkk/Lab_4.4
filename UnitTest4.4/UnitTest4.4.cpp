#include "pch.h"
#include "CppUnitTest.h"
#include "F:\ООП\Тема 4\Lab_4.1\Lab_4.1\Lab_4.1\CArray.h"
#include "F:\ООП\Тема 4\Lab_4.1\Lab_4.1\Lab_4.1\CArray.cpp"
#include "F:\ООП\Тема 4\Lab_4.1\Lab_4.1\Lab_4.1\CAndArray.h"
#include "F:\ООП\Тема 4\Lab_4.1\Lab_4.1\Lab_4.1\CAndArray.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest44
{
	TEST_CLASS(UnitTest44)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array* arr = new AndArray(3, 1, 2, 3);
			Assert::AreEqual(arr->GetSize(), (unsigned int)3);
			delete arr;
		}
	};
}
