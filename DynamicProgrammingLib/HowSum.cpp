#include "pch.h"
#include "HowSum.h"


bool howSum(int targetSum, int input[], vector<int>& values)
{
	if (targetSum == 0) return true;
	if (targetSum < 0) return false;

	auto size = sizeof(input) / sizeof(input[0]);
	for (auto i = 0; i < size; i++)
	{
		int remainder = targetSum - input[i];
		if (howSum(remainder, input, values))
		{
			values.emplace_back(input[i]);
			return true;
		}
	}

	return false;
}