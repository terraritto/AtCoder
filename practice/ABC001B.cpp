#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int m;
	cin >> m;
	if (m < 100)
	{
		cout << "00" << endl;
	}
	else if (m >= 100 && m < 1000)
	{
		m /= 100;
		cout << "0" << m << endl;
	}
	else if (m >= 1000 && m <= 5000)
	{
		m /= 100;
		cout << m << endl;
	}
	else if (m >= 6000 && 30000 >= m)
	{
		m = m / 1000 + 50;
		cout << m << endl;
	}
	else if (m >= 35000 && m <= 70000)
	{
		m = (m / 1000 - 30) / 5 + 80;
		cout << m << endl;
	}
	else if (m > 70000)
	{
		cout << 89 << endl;
	}

	return 0;
}