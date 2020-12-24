#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab11.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest112a
{
	TEST_CLASS(UnitTest112a)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char f[6] = "f.dat";
			int t = goodMathPhys(f);
			Assert::AreEqual(t, 0);
		}
	};
}
