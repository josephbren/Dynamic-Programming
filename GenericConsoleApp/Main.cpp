// CalculateFibNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "CalculateFibonacci.h"
#include "GridTraveler.h"
#include "CanSum.h"
#include "HowSum.h"


int main()
{
	// Calculate Fib
	unordered_map<int, ll> fibMemo;
	cout << "The 50th fib number is: " << Fib(50, fibMemo) << endl;

	// Grid Traveler
	std::map<std::pair<int, int>, ll> memo;
	cout << "The gridTraveler result of 5,3 is: " << gridTraveler(5, 3, memo) << endl;

	// Can Sum
	int input[] = {1, 4};
	std::unordered_map<int, bool> canSumMemo;
	cout << "The canSum result of target 7 is: " << canSum(7, input, canSumMemo) << endl;

	int inputHowSum[] = {1, 5};
	vector<int> values;
	cout << "The howSum result of target 7 is: " << howSum(7, inputHowSum, values) << endl;
}