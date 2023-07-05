#include "pch.h"
#include "../TDD_Calc/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, GetDivideTest)
{
	EXPECT_EQ(1, getDivide(2, 2));
	EXPECT_EQ(0, getDivide(1, 2));
	EXPECT_EQ(3, getDivide(6, 2));
	EXPECT_EQ(1, getDivide(3, 2));
}