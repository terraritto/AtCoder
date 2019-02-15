/*
1 以上 N 以下の整数のうち、10 進法での各桁の和が A 以上 B 以下であるものの総和を求めてください。
*/
#include <iostream>
using namespace std;

int main()
{
	int n, a, b;
	int sum = 0;
	int num = 0;
	int ans = 0;
	cin >> n >> a >> b;
	for (int i = 1; i <= n; i++)
	{
		num = i;
		while (num)
		{
			sum += num % 10;
			num /= 10;
		}

		if (sum >= a && sum <= b)
		{
			ans += i;
		}

		sum = 0;
	}
	cout << ans << endl;
	return 0;
}