#include "pch.h"
#include "CalculateFibonacci.h"


TEST(CalculateFibNumberTests, TestFibs)
{
	unordered_map<int, ll> fibMemo;
	EXPECT_EQ(Fib(0, fibMemo), 0);
	EXPECT_EQ(Fib(1, fibMemo), 1);
	EXPECT_EQ(Fib(2, fibMemo), 1);
	EXPECT_EQ(Fib(3, fibMemo), 2);
	EXPECT_EQ(Fib(4, fibMemo), 3);
	EXPECT_EQ(Fib(5, fibMemo), 5);
}