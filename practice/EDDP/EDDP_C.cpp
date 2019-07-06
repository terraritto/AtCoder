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
	vector<vector<long long int>> a(n,vector<long long int>(3,0));
	for (int i = 0; i < n; i++) { cin >> a[i][0] >> a[i][1] >> a[i][2]; }

	//dp + init
	vector<vector<long long int>> dp(n+1,vector<long long int>(3,0));

	for (int i = 1; i <= n; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			for (int k = 0; k < 3; k++)
			{
				if (j == k) { continue; }
				dp[i][k] = max(dp[i][k], dp[i-1][j] + a[i-1][k]);
			}
		}
	}

	cout << max(max(dp[n][0], dp[n][1]), dp[n][2]) << endl;

	return 0;
}