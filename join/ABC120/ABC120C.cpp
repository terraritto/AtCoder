#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <set>
#include <string>
#include <algorithm>
#include <limits>
#include <iterator>
#include <cmath>
#include <numeric>
using namespace std;

int main()
{
	string s;
	vector<int> n;
	int ans = 0;
	bool t = false;
	cin >> s;
	
	for (int i = 0;i < s.size();i++)
	{
		if (s[i] == '0')
		{
			n.push_back(0);
		}
		else
		{
			n.push_back(1);
		}
	}

	while (true)
	{
		if (n.size() <= 1)
		{
			break;
		}

		for (int i = 0;i < n.size()-1;i++)
		{
			if (n[i] + n[i + 1] == 1)
			{
				ans += 2;
				n.erase(n.begin() + i);
				n.erase(n.begin() + i);
				t = true;
				break;
			}
		}

		if (t == false)
		{
			break;
		}

		t = false;
	}
	
	cout << ans << endl;
	return 0;
}