#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <limits>
#include <iterator>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
	int n, m;cin >> n >> m;
	vector<int> x(m);for (int i = 0;i < m;i++) { cin >> x[i]; } 

	if (m < n) { cout << 0 << endl; }
	else 
	{
		sort(x.begin(), x.end());
		vector<int> diff;
		for (int i = 1;i < m;i++) { diff.push_back(x[i] - x[i - 1]); }
		sort(diff.begin(), diff.end(), greater<int>());
		int ans = *(x.end()-1) - *(x.begin());
		for (int i = 0;i < n - 1;i++) { ans -= diff[i]; }
		cout << ans << endl;
	}

	return 0;
}