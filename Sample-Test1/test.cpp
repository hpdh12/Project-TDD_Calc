#include "pch.h"
#include "../TDD_Calc/cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, ZegopTest) {
	EXPECT_EQ(4, getZegop(2));
}