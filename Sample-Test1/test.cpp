#include "pch.h"
#include "../TDD_Calc/cal.cpp"

TEST(TestCaseName, ZegopTest) {
	EXPECT_EQ(4, getZegop(2));
}

TEST(TestCaseName, MinusTest) 
{
	EXPECT_EQ(2, getMinus(4,2));
	EXPECT_EQ(0, getMinus(2,2));
}


TEST(TestCaseCalc, TestSum)
{
	EXPECT_EQ(10, getSum(4, 6));
}

TEST(TestCaseName, GetDivideTest)
{
	EXPECT_EQ(1, getDivide(2, 2));
	EXPECT_EQ(0, getDivide(1, 2));
	EXPECT_EQ(3, getDivide(6, 2));
	EXPECT_EQ(1, getDivide(3, 2));
}