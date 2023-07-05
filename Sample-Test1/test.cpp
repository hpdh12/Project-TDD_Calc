#include "pch.h"
#include "../TDD_Calc/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, MinusTest) {
	EXPECT_EQ(2, getMinus(4,2));
	EXPECT_EQ(0, getMinus(2,2));
}