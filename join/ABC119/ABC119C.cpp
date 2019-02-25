#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <math.h>
#include <limits>
using namespace std;

int n,result = numeric_limits<int>::max();
vector<int> bamboo;
vector<int> num(3);

int Plus(int count)
{
	if (count > 1)
	{
		return (count - 1) * 10;
	}
	return 0;
}

void calc(vector<int> v)
{
	int ans = 0;
	int l1 = 0, l2 = 0, l3 = 0;
	int n1 = 0, n2 = 0, n3 = 0;
	for (int i = 0;i < v.size();i++)
	{
		if (v[i] == 1)
		{
			l1 += bamboo[i];
			n1++;
		}
		else if (v[i] == 2)
		{
			l2 += bamboo[i];
			n2++;
		}
		else if (v[i] == 3)
		{
			l3 += bamboo[i];
			n3++;
		}
	}
	ans += abs(l1 - num[0]) + abs(l2 - num[1]) + abs(l3 - num[2]);

	ans += Plus(n1) + Plus(n2) + Plus(n3);

	if (result > ans && n1 >= 1 && n2 >= 1 && n3 >= 1)
	{
		result = ans;
	}
}

void dfs(int depth, vector<int> v)
{
	if (depth == n) { calc(v); }
	else
	{
		for (int i = 0;i < 4;i++)
		{
			v[depth] = i;
			dfs(depth + 1, v);
		}
	}
}

int main()
{
	cin >> n >> num[0] >> num[1] >> num[2];
	bamboo.resize(n);
	for (int i = 0;i < n;i++)
	{
		cin >> bamboo[i];
	}

	dfs(0, bamboo);

	cout << result << endl;

	return 0;
}