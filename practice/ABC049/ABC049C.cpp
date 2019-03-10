#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
	string s;
	string t[] = {"dreamer","dream","eraser","erase"};
	int i = 0;
	cin >> s;
	while (true)
	{
		for (;i < sizeof(t) / sizeof(t[0]);i++)
		{
			if (static_cast<int>(s.size()) - static_cast<int>(t[i].size()) >= 0)
			{
				string f = s.substr(s.size() - t[i].size(), t[i].size());
				if (f == t[i]) {
					s.erase(s.end() - t[i].size(), s.end());
					i--;
					break;
				}
			}
		}
		if (i == sizeof(t) / sizeof(t[0]))
		{
			cout << "NO" << endl;
			break;
		}
		if (s.size() == 0)
		{
			cout << "YES" << endl;
			break;
		}
		i = 0;
	}

	return 0;
}