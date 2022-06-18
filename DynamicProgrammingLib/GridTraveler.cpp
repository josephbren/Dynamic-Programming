#include "pch.h"
#include "GridTraveler.h"


/*
	Constraints - user can only move *down* and to the *right* through the grid
	m = rows
	n = columns
	S = start
	E = end

	-------------------------
	|  S  |     |     |     |
	|     |     |     |     |
	-------------------------
	|     |     |     |     |
	|     |     |     |     |
	-------------------------
	|     |     |     |  E  |
	|     |     |     |     |
	-------------------------
*/


/*
	Brute force solution - no memoization
	Time complexity - O(2^(n + m))
	Space complexity - O(n + m)
*/
int gridTraveler(int m, int n)
{
	if (m == 1 && n == 1) return 1;	// a 1 by 1 grid is already at the end since the start matches the end
	if (m == 0 || n == 0) return 0; // no grid dimension means 0

	return gridTraveler(m - 1, n) + gridTraveler(m, n - 1);
}


/*
	Optimized (and overloaded) memoization solution to problem
	Time complexity - O(n * m)
	Space complexity - O(n + m)
*/
ll gridTraveler(int m, int n, std::map<std::pair<int, int>, ll>& memo)
{
	if (m == 1 && n == 1) return 1;
	if (m == 0 || n == 0) return 0;

	auto key = std::make_pair(m, n);
	if (memo.find(key) != memo.end())
	{
		return memo[key];
	}

	memo[key] = gridTraveler(m - 1, n, memo) + gridTraveler(m, n - 1, memo);
	return memo[key];
}