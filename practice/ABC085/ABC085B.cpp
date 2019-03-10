#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n, 0);
	for (int i = 0; i < n;i++)
	{
		cin >> a[i];
	}
	sort(a.begin(), a.end(), greater<int>());
	decltype(a)::iterator r = unique(a.begin(), a.end());
	a.erase(r, a.end());

	cout << a.size() << endl;

	return 0;
}