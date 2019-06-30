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
typedef pair<int, int> Pos;
int sy, sx;
int gy, gx;
int n, m;
array<Pos, 4> dir{ Pos(1,0),Pos(0,1),Pos(-1,0),Pos(0,-1) };


vector<char> s;
vector<int> d;

int BFS()
{
	queue<Pos> que;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			d[i * m + j] = numeric_limits<int>::max();
		}
	}

	que.push(Pos(sx,sy));
	d[sy * m + sx] = 0;

	while (que.size())
	{
		Pos p = que.front(); que.pop();
		
		if (p.first == gx && p.second == gy) { break; }

		for (int i = 0; i < 4; i++)
		{
			Pos next = Pos(p.first + dir[i].first, p.second + dir[i].second);
			if (next.first >= 0 && m > next.first && next.second >= 0 && n > next.second
				&& s[next.second * m + next.first] != '#'
				&& d[next.second * m + next.first] == numeric_limits<int>::max())
			{
				que.push(next);
				d[next.second * m + next.first] = d[p.second * m + p.first] + 1;
			}
		}
	}
	return d[gy * m + gx];
}

int main()
{
	cin >> n >> m >> sy >> sx >> gy >> gx;
	sy -= 1; sx -= 1; gy -= 1; gx -= 1;
	s.resize(n * m);
	d.resize(n * m);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> s[i * m + j];
		}
	}

	cout << BFS() << endl;

	return 0;
}