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
	int n; cin >> n;
	vector<int> p(n);
	for (int i = 0; i < n; i++) { cin >> p[i]; }

	int ans = 0;
	for (int i = 1; i < n - 1; i++)
	{
		if (max(min(p[i - 1], p[i]), p[i + 1]) == p[i] || min(max(p[i - 1], p[i]), p[i + 1]) == p[i])
		{
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}