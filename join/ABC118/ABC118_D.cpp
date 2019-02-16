#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
	int n, m;
	int match[10] = { 0,2,5,5,4,5,6,3,7,6 };
	cin >> n >> m;

	vector<int> num(9, 0);
	for (int i = 0; i < m;i++)
	{
		int a;
		cin >> a;
		num[match[a]] = max(num[match[a]], a); //num:indexがコスト,要素がその数字 maxで最大値の数字を選ぶ
	}

	vector<string> dp(n + 1, "0");
	dp[0] = "";
	for (int i = 0; i < n;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			if (i + j > n || num[j] == 0 || dp[i] == "0") //添え字を超す(コストを超す):選ばれてない数字:0の場合(足しても意味はない) は飛ばす
			{
				continue;
			}
			string s = dp[i]; //コストiの数値
			s.push_back(num[j] + '0'); //文字コード:48+数値 つまり数値を挿入している(コストj)

			if (dp[i + j] == "" || dp[i + j] < s || (int)(dp[i + j]).size() < (int)(s).size())//コストにまだ数値が割り振られていない:桁数が同じ場合、文字コードの大きさで判定:桁数の大きさ
			{
				dp[i + j] = s;
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}