#include <iostream>
#include <iomanip>
#include <vector>
#include <map>
#include <string>
#include <algorithm>
#include <limits>
#include <iterator>
#include <cmath>
using namespace std;

int main()
{
	long double t, x;
	cin >> t >> x;
	cout <<fixed<< setprecision(10) << t/x << endl;

	return 0;
}