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
	vector<int> d(n);
	for (int i = 0; i < n; i++) { cin >> d[i]; }
	sort(d.begin(), d.end());
	
	cout << d[n/2] - d[n/2-1] << endl;

	return 0;
}