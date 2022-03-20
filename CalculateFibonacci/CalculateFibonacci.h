#pragma once
#include <unordered_map>

using namespace std;
typedef long long ll;	// fib numbers can get quite large


ll CalculateFibonacci(int n, unordered_map<int, ll>& fibMemo);
