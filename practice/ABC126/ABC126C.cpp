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
	int n, k; cin >> n >> k;
	
	double ans = 0;
	double p = 1.0 / n;
	for (int i = 1; i < n + 1; i++)
	{
		int count = i;
		int num = 0;
		while (true)
		{
			if (count >= k) { break; }
			count *= 2;
			num++;
		}
		ans += p * pow(1.0/2.0, num);
	}

	cout << fixed << setprecision(12) << ans << endl;
	return 0;
}