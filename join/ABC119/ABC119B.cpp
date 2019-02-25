#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<float> money(n);
	vector<string> value(n);	
	float ans = 0;

	for (int i = 0;i < n;i++)
	{
		cin >> money[i] >> value[i];
	}

	for (int i = 0;i < n;i++)
	{
		if (value[i] == "JPY")
		{
			ans += money[i];
		}
		else
		{
			ans += (380000.0 * money[i]);
		}
	}

	cout << ans << endl;

	return 0;
}