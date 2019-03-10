#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

struct Vector3
{
	int t;
	int x;
	int y;
};

int main()
{
	int n, j = 0;
	int xx = 0, yy = 0;
	bool ans = true;
	cin >> n;
	vector<Vector3> v(n);
	for (int i = 0;i < n;i++)
	{
		cin >> v[i].t >> v[i].x >> v[i].y;
	}

	for (int i = 0;i < v[n - 1].t;i++)
	{
		if (v[j].x > xx) { xx++; }
		else if (v[j].x < xx) { xx--; }
		else if (v[j].y < yy) { yy--; }
		else if (v[j].y > yy) { yy++; }
		else { xx++; }

		if (i + 1 == v[j].t)
		{
			if (v[j].x != xx || v[j].y != yy) { ans = false; break; }
			else { j++; }
		}
	}

	if (ans) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }

	return 0;
}