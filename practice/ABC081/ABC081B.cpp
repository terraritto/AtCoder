/*
黒板に N 個の正の整数 A1,...,ANが書かれています．
すぬけ君は，黒板に書かれている整数がすべて偶数であるとき，次の操作を行うことができます．
黒板に書かれている整数すべてを，2で割ったものに置き換える．
すぬけ君は最大で何回操作を行うことができるかを求めてください．
*/
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int n = 0;
	cin >> n;
	vector<int> s;
	int ans = 0;
	bool t = true;

	for (int i = 0; i < n; i++)
	{
		cin >> ans;
		s.push_back(ans);
	}
	ans = 0;
	while (t)
	{
		for (int i = 0; i < s.size();i++)
		{
			if (s[i] % 2 == 0)
			{
				s[i] /= 2;
			}
			else
			{
				t = false;
			}
		}
		ans++;
	}
	cout << ans-1 << endl;
	return 0;
}