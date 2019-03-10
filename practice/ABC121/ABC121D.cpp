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

long long f(long long n)
{
	if (n <= 0)
	{
		return 0;
	}
	switch (n % 4)
	{
	case 0:
		return n;
	case 1:
		return 1;
	case 2:
		return n + 1;
	case 3:
		return 0;
	}
}

int main()
{
	long long a, b;
	cin >> a >> b;

	cout << (f(a-1)^f(b)) << endl;

	return 0;
}