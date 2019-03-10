#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <limits>
#include <iterator>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
	long long n, m;
	long long ans = 0;
	cin >> n >> m;
	
	multimap<long, long> a;

	for (int i = 0;i < n;i++)
	{
		long long temp1, temp2;
		cin >> temp1 >> temp2;
		a.insert(make_pair(temp1, temp2));
	}

	for (auto itr = a.begin();itr != a.end();++itr)
	{
		if (itr->second < m)
		{
			ans += itr->first * itr->second;
			m -= itr->second;
		}
		else
		{
			ans += itr->first * m;
			break;
		}
	}

	cout << ans << endl;

	return 0;
}