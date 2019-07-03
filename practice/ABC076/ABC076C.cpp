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

int main()
{
	string s; string t;
	cin >> s; cin >> t;
	std::vector<string> ans;
	bool st = false;
	for (int i = 0; i < s.size(); i++)
	{
		int num = 1;
		if (s[i] == t[0] || s[i] == '?')
		{
			for (int j = 1; j < t.size(); j++)
			{
				if (i + j > s.size() - 1) break; //範囲外
				if (s[i + j] == '?' || s[i + j] == t[j]) //?か文字一致
				{
					num++;
				}
			}
		}

		if (num == t.size())
		{
			string pl = s;
			for (int j = 0; j < t.size(); j++)
			{
				pl[i + j] = t[j];
			}

			for (int j = 0; j < pl.size(); j++)
			{
				if (pl[j] == '?') { pl[j] = 'a'; }
			}

			ans.emplace_back(pl);
			st = true;
		}
	}

	if (st == true)
	{
		sort(ans.begin(), ans.end());
		cout << ans[0] << endl;
	}
	else
	{
		cout << "UNRESTORABLE" << endl;
	}

	return 0;
}