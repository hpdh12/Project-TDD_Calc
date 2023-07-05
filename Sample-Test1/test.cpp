#include "pch.h"
#include "../TDD_Calc/cal.cpp"

TEST(TestCaseCalc, TestSum)
{
	EXPECT_EQ(10, getSum(4, 6));
}