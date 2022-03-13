// CalculateFibNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>

using namespace std;
typedef long long ll;	// fib numbers can get quite large


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


int main()
{
	unordered_map<int, ll> fibMemo;

	cout << "The 50th fib number is: " << CalculateFibonacci(50, fibMemo);
}

