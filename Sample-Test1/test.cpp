#include "pch.h"
#include "../TDD_Calc/cal.cpp"

TEST(TestCaseName, MinusTest) 
{
	EXPECT_EQ(2, getMinus(4,2));
	EXPECT_EQ(0, getMinus(2,2));
}

TEST(TestCaseCalc, TestSum)
{
	EXPECT_EQ(10, getSum(4, 6));

}