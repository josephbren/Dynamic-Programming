#include "pch.h"
#include "CalculateFibonacci.h"


TEST(CalculateFibNumberTests, TestFibs)
{
	unordered_map<int, ll> fibMemo;
	EXPECT_EQ(CalculateFibonacci(0, fibMemo), 0);
	EXPECT_EQ(CalculateFibonacci(1, fibMemo), 1);
	EXPECT_EQ(CalculateFibonacci(2, fibMemo), 1);
	EXPECT_EQ(CalculateFibonacci(3, fibMemo), 2);
	EXPECT_EQ(CalculateFibonacci(4, fibMemo), 3);
	EXPECT_EQ(CalculateFibonacci(5, fibMemo), 5);
}