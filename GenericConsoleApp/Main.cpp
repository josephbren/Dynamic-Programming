// CalculateFibNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculateFibonacci.h"


int main()
{
	unordered_map<int, ll> fibMemo;

	cout << "The 50th fib number is: " << CalculateFibonacci(50, fibMemo);
}