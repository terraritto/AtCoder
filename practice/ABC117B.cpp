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
	int n; cin >> n;
	vector<int> l(n);
	for (int i = 0;i < l.size();i++) { cin >> l[i]; }
	sort(l.begin(), l.end());

	if (accumulate(l.begin(), l.end(), 0) - *(l.end()-1) > *(l.end()-1)) { cout << "Yes" << endl; }
	else { cout << "No" << endl; }

	return 0;
}