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
	int a, b, k;
	cin >> a >> b >> k;
	vector<int> n;

	if (a > b)
	{
		int nn = a;
		a = b;
		b = nn;
	}

	for (int i = 0;i < b;i++)
	{
		if (a % (i + 1) == 0 && b % (i + 1) == 0)
		{
			n.push_back(i + 1);
		}
	}
	reverse(n.begin(), n.end());
	cout << n[k - 1] << endl;
	return 0;
}