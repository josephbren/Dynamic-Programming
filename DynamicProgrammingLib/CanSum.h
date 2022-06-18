#pragma once

/*
	Write a function 'canSum(targetSum, numbers)' that takes in a targetSum and an array of numbers as arguments.

	The function should return a boolean indicating whether or not it is possible to generate the targetSum using numbner from the array

	You may use an element of the array as many times as needed

	You may assume that all input numbers are nonnegative
*/

bool canSum(int target, int input[]);
bool canSum(int targetSum, int input[], unordered_map<int, bool>& memo);
