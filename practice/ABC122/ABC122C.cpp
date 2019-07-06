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
	int n, q; string s;
	cin >> n >> q >> s;
	vector<int> index(n,0);
	
	for (int i = 1; i < n; i++)
	{
		index[i] = index[i-1] + (s[i-1] == 'A' && s[i] == 'C');
	}

	for (int i = 0; i < q; i++)
	{
		int first, last; cin >> first >> last;

		int ans = index[last-1] - index[first-1];

		cout << ans << endl;
	}

	return 0;
}