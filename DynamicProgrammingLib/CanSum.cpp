#include "pch.h"
#include "CanSum.h"

/*
	Brute force solution
	Time complexity - O(n^m) - For every input on every level
	Space complexity - O(m) - Height of the tree
*/

bool canSum(int targetSum, int input[])
{
	// Base case
	if (targetSum == 0) return true;
	if (targetSum < 0) return false;

	auto size = sizeof(input) / sizeof(input[0]);
	for (auto i = 0; i < size; i++)
	{
		int remainder = targetSum - input[i];
		if (canSum(remainder, input)) return true;
	}

	return false;
}


/*
	Optimized solution using memoization
	Time Complexity - O(n * m) 
	Space Complexity - O(m) - m represents tree height
*/
bool canSum(int targetSum, int input[], unordered_map<int, bool>& memo)
{
	if (targetSum == 0) return true;
	if (targetSum < 0) return false;

	if (memo.find(targetSum) != memo.end())
	{
		return memo[targetSum];
	}

	auto size = sizeof(input) / sizeof(input[0]);
	for(auto i = 0; i < size; i++)
	{
		int remainder = targetSum - input[i];
		if (canSum(remainder, input, memo))
		{
			memo[targetSum] = true;
			return true;
		}
	}

	memo[targetSum] = false;
	return false;
}