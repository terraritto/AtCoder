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
	int n; cin >> n;
	std::vector<string> s(n);
	for (int i = 0; i < n; i++) { cin >> s[i]; }


	for (auto it : s)
	{
		int ans = 0;
		while (true)
		{
			auto index1 = it.find("kyoto");
			auto index2 = it.find("tokyo");
			
			if (index1 != string::npos || index2 != string::npos)
			{
				it.erase(it.begin(),it.begin() + (index1 > index2 ? index2 : index1) + 5);
				ans++;
				continue;
			}

			break;
		}
		cout << ans << endl;
	}

	return 0;
}