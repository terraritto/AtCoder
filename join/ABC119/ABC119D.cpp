#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <limits>
#include <iterator>
#include <cmath>
using namespace std;
const long long INF = 1LL << 58;

int main()
{
	int a, b, q;
	long long ans = INF;
	cin >> a >> b >> q;
	vector<long long> s(a), t(b), x(q);

	for (int i = 0;i < a;i++)
	{
		cin >> s[i];
	}

	for (int i = 0;i < b;i++)
	{
		cin >> t[i];
	}

	for (int i = 0;i < q;i++)
	{
		cin >> x[i];
	}

	s.push_back(INF);
	s.push_back(-INF);
	t.push_back(INF);
	t.push_back(-INF);
	sort(s.begin(), s.end());
	sort(t.begin(), t.end());

	for (long long dis : x)
	{
		vector<long long> s1(2), t1(2);
		auto iter1 = lower_bound(s.begin(), s.end(), dis);
		auto iter2 = lower_bound(t.begin(), t.end(), dis);
		for (int i = 0;i < 2;i++)
		{
			s1[i] = *(iter1 - i);
			t1[i] = *(iter2 - i);

		}

		for (int i = 0;i < 2;i++)
		{
			for (int j = 0; j < 2;j++)
			{
				long long x1 = abs(s1[i] - dis);
				long long x2 = abs(t1[j] - s1[i]);
				long long x3 = abs(t1[j] - dis);
				if (x1 + x2 < ans)
				{
					ans = x1 + x2;
				}

				if (x3 + x2 < ans)
				{
					ans = x2 + x3;
				}
			}
		}

		cout << ans << endl;
		ans = INF;
	}

	return 0;
}