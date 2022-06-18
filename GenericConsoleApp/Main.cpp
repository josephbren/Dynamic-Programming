// CalculateFibNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculateFibonacci.h"
#include "GridTraveler.h"
#include "CanSum.h"


int main()
{
	// Calculate Fib
	unordered_map<int, ll> fibMemo;
	cout << "The 50th fib number is: " << Fib(50, fibMemo) << endl;

	// Grid Traveler
	std::map<std::pair<int, int>, ll> memo;
	cout << "The answer is: " << gridTraveler(5, 3, memo) << endl;

	// Can Sum
	int input[] = {1, 4};
	std::unordered_map<int, bool> canSumMemo;
	cout << "The canSum result is: " << canSum(7, input, canSumMemo);
}