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
	int  H, W;
	cin >> H >> W;
	int h, w;
	cin >> h >> w;

	cout << H * W - (h * W + w * H - w * h) << endl;

	return 0;
}