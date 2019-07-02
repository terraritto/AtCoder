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
	string s; cin >> s;

	for (auto iter = s.begin(); iter != s.end(); ++iter)
	{
		if (*iter == '1') { *iter = '9'; }
		else if (*iter == '9') { *iter = '1'; }
	}

	cout << s << endl;

	return 0;
}