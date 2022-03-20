// CalculateFib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "CalculateFibonacci.h"


/*
	Memoization should be used to calculate the fibonacci number to cache already computed fib numbers
	and reuse them instead of recursively recalculating
*/
ll CalculateFibonacci(int n, unordered_map<int, ll>& fibMemo)
{
	if (n < 0)
		return -1;	// Handle edge cases, invalid input

	if (fibMemo.find(n) == fibMemo.end())
	{
		if (n <= 1)
			fibMemo[n] = n;		// handle base cases, 0 & 1
		else
		{
			fibMemo[n] = CalculateFibonacci(n - 2, fibMemo) + CalculateFibonacci(n - 1, fibMemo);
		}
	}

	return fibMemo[n];
}
