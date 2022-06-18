// CalculateFib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "CalculateFibonacci.h"


/*
	Brute force solution, no memoization
*/
ll Fib(int n)
{
	if (n < 0) return -1;
	if (n <= 2) return 1;

	return Fib(n - 1) + Fib(n - 2);
}


/*
	Memoization should be used to calculate the fibonacci number to cache already computed fib numbers
	and reuse them instead of recursively recalculating
*/
ll Fib(int n, unordered_map<int, ll>& memo)
{
	if (n < 0) return -1;
	if (n <= 2) return 1;

	if (memo.find(n) != memo.end())
	{
		return memo[n];
	}

	memo[n] = Fib(n - 1, memo) + Fib(n - 2, memo);
	return memo[n];
}

