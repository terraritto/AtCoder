#include <iostream>
#include <iomanip>
#include <vector>
#include <array>
#include <map>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <string>
#include <algorithm>
#include <limits>
#include <iterator>
#include <cmath>
#include <numeric>
#include <stack>
#include <queue>
#include <cassert>
#include <forward_list>
#include <chrono>
#include <deque>
#include <list>
#include <random>
#include <cstdio>
#include <sstream>

using namespace std;

int main()
{
	string s;
	cin >> s;
	sort(s.begin(), s.end());
	auto iter1 = s.begin();
	auto iter2 = s.begin() + 2;

	if (*iter1 == *(iter1 + 1) && *iter2 == *(iter2 + 1) && *iter1 != *iter2)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}