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
	int n, k;
	string s;
	cin >> n >> k >> s;

	s[k-1] = s[k-1] + 0x20;

	cout << s << endl;

	return 0;
}