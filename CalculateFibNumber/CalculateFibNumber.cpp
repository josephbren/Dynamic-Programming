// CalculateFibNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>

using namespace std;
typedef long long ll;


ll CalculateFibonacci(int n, unordered_map<int, ll>& fibMemo)
{
	if (n < 0)
		return -1;

	if (fibMemo.find(n) == fibMemo.end())
	{
		if (n <= 1)
			fibMemo[n] = n;
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

