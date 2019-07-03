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
	int n, m; cin >> n >> m;
	vector<int> L(m), R(m);
	for (int i = 0; i < m; i++) { cin >> L[i] >> R[i]; }

	pair<int, int> ans(L[0],R[0]);
	for (int i = 0; i < m; i++)
	{
		if (ans.first <= L[i] && L[i] <= ans.second) { ans.first = L[i]; }
		else if (ans.second < L[i]) { ans.first = 0; break; }
		if (R[i] <= ans.second && ans.first <= R[i]) { ans.second = R[i]; }
		else if (R[i] < ans.first) { ans.second = 0; break; }
	}

	cout << (ans.first != 0 && ans.second != 0 ? ans.second - ans.first + 1 : 0) << endl;
	return 0;
}