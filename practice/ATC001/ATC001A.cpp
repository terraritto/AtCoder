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

int a, b;
vector<char> grid;
vector<int> check;
bool dfs(pair<int,int> p)
{
	if (p.first < 0 || p.first >= b || p.second < 0 || p.second >= a) { return false; }
	if (check[p.second * b + p.first] == 1) { return false; }
	
	check[p.second * b + p.first] = 1;
	if (grid[p.second * b + p.first] == '#') { return false; }
	if (grid[p.second * b + p.first] == 'g') { return true; }

	if (dfs(make_pair(p.first + 1, p.second))) { return true; }
	if (dfs(make_pair(p.first - 1, p.second))) { return true; }
	if (dfs(make_pair(p.first, p.second + 1))) { return true; }
	if (dfs(make_pair(p.first, p.second - 1))) { return true; }

	return false;
}

int main()
{
	pair<int, int> pos;
	cin >> a >> b;
	grid.resize(a * b);
	check.resize(a * b, 0);
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < a; j++) {
			cin >> grid[j*b+i];
			if (grid[j*b+i] == 's') { pos = make_pair(i, j); }
		}
	}

	if (dfs(pos)) 
	{ 
		cout << "Yes" << endl; 
	}
	else 
	{ 
		cout << "No" << endl; 
	}

	return 0;
}