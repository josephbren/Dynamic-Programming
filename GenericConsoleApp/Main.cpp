// CalculateFibNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculateFibonacci.h"
#include "GridTraveler.h"


int main()
{
	unordered_map<int, ll> fibMemo;
	cout << "The 50th fib number is: " << Fib(50, fibMemo) << endl;

	std::map<std::pair<int, int>, ll> memo;
	int m = 0, n = 0;

	cout << "Enter m & n (i.e. 5 3): " << endl;
	cin >> m >> n;
	cout << "The answer is: " << gridTraveler(m, n, memo) << endl;
}