#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s;
	cin >> s;
	string a, b, c;
	a = s.substr(0, 4);
	b = s.substr(5, 2);
	c = s.substr(8, 2);
	if (stoi(a) < 2019)
	{
		cout << "Heisei" << endl;
	}
	else if (stoi(a) == 2019 && stoi(b) <= 4)
	{
		cout << "Heisei" << endl;
	}
	else
	{
		cout << "TBD" << endl;
	}
	return 0;
}