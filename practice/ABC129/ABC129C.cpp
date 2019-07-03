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
T GCD(T m, T n)
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
T LCM(T m, T n)
{
	return m * n / GCD(m, n);
}



int main()
{
	int n, m;
	cin >> n >> m;
	vector<bool> a(n + 1, true); // can't step
	for (int i = 0; i < m; i++) { int l; cin >> l; a[l] = false; }
	
	vector<long long int> dp(n + 1, 0);//dp table

	//initial condition
	// fn = fn-1 + fn-2
	dp[0] = 1;
	if (a[1]) { dp[1] = 1; }

	for (int i = 2; i < n + 1; i++)
	{
		if (a[i - 1]) { dp[i] += dp[i - 1]; } //fn-1
		if (a[i - 2]) { dp[i] += dp[i - 2]; } //fn-2
		dp[i] %= 1000000007;
	}

	cout << dp[n] << endl;

	return 0;
}