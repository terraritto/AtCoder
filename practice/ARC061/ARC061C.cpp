#include <iostream>
#include <iomanip>
#include <vector>
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
	string S;
	cin >> S;

	int digit = S.size()-1;

	unsigned long long ans = 0;
	for (int bit = 0; bit < (1<<digit); ++bit)
	{
		vector<int> a;
		for (int i = 0; i < digit; ++i)
		{
			if (bit & (1 << i))
			{
				a.push_back(i);
			}
		}

		unsigned long long m = 0;
		int l = 0;
		for (int i = 0; i < a.size(); ++i)
		{
			string s;
			if (a.size() - 1 == i)
			{
				s = S.substr(l, a[i] - l + 1);
			}
			else {
				s = S.substr(l, a[i] - l + 1);
			}
			m += stoi(s);
			l = a[i] + 1;
		}
		m += stoull(S.substr(l,(S.size() - l)));
		ans += m;
	}

	cout << ans << endl;
	return 0;
}