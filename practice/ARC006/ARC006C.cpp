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
	vector<int> w(n), l;
	bool ad = true;
	for (int i = 0; i < n; i++) { cin >> w[i]; } l.emplace_back(w[0]);
	
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < l.size(); j++)
		{
			if (l[j] >= w[i]) { l[j] = w[i]; ad = false;  break; }
		}

		if (ad == true) { l.emplace_back(w[i]); }
		ad = true;
	}

	cout << l.size() << endl;
	return 0;
}