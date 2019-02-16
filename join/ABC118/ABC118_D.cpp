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
		num[match[a]] = max(num[match[a]], a); //num:index���R�X�g,�v�f�����̐��� max�ōő�l�̐�����I��
	}

	vector<string> dp(n + 1, "0");
	dp[0] = "";
	for (int i = 0; i < n;i++)
	{
		for (int j = 0;j < 9;j++)
		{
			if (i + j > n || num[j] == 0 || dp[i] == "0") //�Y�����𒴂�(�R�X�g�𒴂�):�I�΂�ĂȂ�����:0�̏ꍇ(�����Ă��Ӗ��͂Ȃ�) �͔�΂�
			{
				continue;
			}
			string s = dp[i]; //�R�X�gi�̐��l
			s.push_back(num[j] + '0'); //�����R�[�h:48+���l �܂萔�l��}�����Ă���(�R�X�gj)

			if (dp[i + j] == "" || dp[i + j] < s || (int)(dp[i + j]).size() < (int)(s).size())//�R�X�g�ɂ܂����l������U���Ă��Ȃ�:�����������ꍇ�A�����R�[�h�̑傫���Ŕ���:�����̑傫��
			{
				dp[i + j] = s;
			}
		}
	}
	cout << dp[n] << endl;
	return 0;
}