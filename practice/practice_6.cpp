/*
1 �ȏ� N �ȉ��̐����̂����A10 �i�@�ł̊e���̘a�� A �ȏ� B �ȉ��ł�����̂̑��a�����߂Ă��������B
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