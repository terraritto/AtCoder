/*
���� N �̐��̐��� A1,...,AN��������Ă��܂��D
���ʂ��N�́C���ɏ�����Ă��鐮�������ׂċ����ł���Ƃ��C���̑�����s�����Ƃ��ł��܂��D
���ɏ�����Ă��鐮�����ׂĂ��C2�Ŋ��������̂ɒu��������D
���ʂ��N�͍ő�ŉ��񑀍���s�����Ƃ��ł��邩�����߂Ă��������D
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