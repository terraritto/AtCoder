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

//最大公約数
template<class T>
inline T GCD(T m, T n)
{
	T temp;
	while (m % n != 0)
	{
		temp = n;
		n = m % n;
		m = temp;
	}
	return n;
}

//最小公倍数
template<class T>
inline T LCM(T m, T n)
{
	return m * n / GCD(m, n);
}



int main()
{
	int n; cin >> n;
	vector<int> h(n);
	for (int i = 0; i < n; i++) { cin >> h[i]; }

	int ans = 0;
	while (true)
	{
		auto mid = find(h.begin(), h.end(), 0);
		int m = *min_element(h.begin(), distance(h.begin(),mid)? mid-1:mid);

		for (auto it = h.begin(); it < mid; ++it)
		{
			*it = *it - m > 0 ? *it - m : 0;
		}

		ans += m;

		auto iter = h.begin();
		for (auto it : h)
		{
			if (it != 0) { break; }
			iter++;
		}
		h.erase(h.begin(), iter);

		if (h.size() == 0) { break; }
	}

	cout << ans << endl;
	return 0;
}