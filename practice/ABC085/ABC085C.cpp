#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int N, Y;
	int ans[3] = { -1,-1,-1 };
	int money[] = { 10000,5000,1000 };
	cin >> N >> Y;

	for (int i = 0;i <= N;i++)
	{
		for (int j = 0;i + j <= N;j++)
		{
			if (Y == money[0] * (N - i - j) + money[1] * i + money[2] * j)
			{
				ans[0] = N - i - j;
				ans[1] = i;
				ans[2] = j;
				goto OUT;
			}
		}
	}
OUT:

	cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;

	return 0;
}