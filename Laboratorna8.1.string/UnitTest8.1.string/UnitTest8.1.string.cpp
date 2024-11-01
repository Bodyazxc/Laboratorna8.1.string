#include "pch.h"
#include "CppUnitTest.h"
#include <string>
#include "../Laboratorna8.1.string/Laboratorna8.1.string.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest81string
{
	TEST_CLASS(UnitTest81string)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string str1 = "abc+de-fg=hij"; 
			string str2 = "abcde";         

			Change(str1);
			Assert::AreEqual(string("abc**de**fg**hij"), str1); 
			Change(str2);
			Assert::AreEqual(string("abcde"), str2);
		}
	};
}
