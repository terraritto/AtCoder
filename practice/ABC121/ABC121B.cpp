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
	int n, m, c;
	cin >> n >> m >> c;
	vector<int> b(m);
	vector<int> a(m);
	int ans = 0;

	for (int i = 0;i < m;i++)
	{
		cin >> b[i];
	}

	for (int i = 0;i < n;i++)
	{
		for (int i = 0;i < m;i++)
		{
			cin >> a[i];
			a[i] *= b[i];
		}
		if (accumulate(a.begin(), a.end(), 0)  + c> 0)
		{
			ans++;
		}
	}

	cout << ans << endl;

	return 0;
}