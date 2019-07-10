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
	vector<int> w(n);
	for (int i = 0; i < n; ++i) { cin >> w[i]; }

	vector<int> l(n), r(n);
	l[0] = w[0]; r[n - 1] = w[n - 1];
	for (int i = 1; i < n; ++i) { l[i] += w[i] + l[i - 1]; }
	for (int i = n - 2; i >= 0; --i) { r[i] += w[i] + r[i + 1]; }
	vector<int> ans(n-1);
	for (int i = 0; i < n-1; ++i) { ans[i] = abs(r[i+1] - l[i]); }


	cout << *min_element(ans.begin(),ans.end()) << endl;
	return 0;
}