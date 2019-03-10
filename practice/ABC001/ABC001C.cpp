#include <iostream>
#include <string>
#include <math.h>
#include <limits>

using namespace std;

int main()
{
	float deg, dis, n1 = 11.25, n2 = 33.75;
	string dir[] = { "NNE","NE","ENE","E","ESE","SE","SSE","S","SSW","SW","WSW","W","WNW","NW","NNW" };
	float m2[13] = { 0.2f,1.5,3.3,5.4,7.9,10.7,13.8,17.1,20.7,24.4,28.4,32.6,numeric_limits<float>::max() };
	int wind[] = { 0,1,2,3,4,5,6,7,8,9,10,11,12 };
	string ans;
	bool dirSw = false;
	cin >> deg >> dis;
	deg /= 10;
	dis /= 60;
	dis = round(dis * 10) / 10;
	for (int i = 0;i < sizeof(dir) / sizeof(dir[0]);i++)
	{
		if (deg >= n1 && deg < n2)
		{
			dirSw = true;
			ans = dir[i];
			break;
		}
		n1 += 22.5;n2 += 22.5;
	}
	if (dirSw == false)
	{
		ans = "N";
	}

	for (int i = 0; i < sizeof(wind) / sizeof(wind[0]);i++)
	{
		float s = m2[i];
		s = round(s * 10) / 10;
		if (dis <= s)
		{
			if (wind[i] == 0) { ans = "C"; }
			cout << ans << " " << wind[i] << endl;
			break;
		}
	}

	return 0;
}