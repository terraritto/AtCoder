/*
あなたは、500 円玉を A 枚、100 円玉を B 枚、50 円玉を C 枚持っています。 
これらの硬貨の中から何枚かを選び、合計金額をちょうど X円にする方法は何通りありますか。
同じ種類の硬貨どうしは区別できません。
2 通りの硬貨の選び方は、ある種類の硬貨についてその硬貨を選ぶ枚数が異なるとき区別されます。
*/

#include <iostream>
using namespace std;

int main()
{
	int a, b, c, x, n=0;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> x;
	for(int i = 0; i <= a; i++)
	{
		for (int j = 0; j <= b; j++)
		{
			for (int k = 0; k <= c; k++)
			{
				if (i * 500 + j * 100 + k * 50 == x)
				{
					n++;
				}
			}
		}
	}
	cout << n << endl;
	return 0;
}