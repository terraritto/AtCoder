/*
���ʂ��N�� 1,2,3 �̔ԍ������� 3 �̃}�X����Ȃ�}�X�ڂ������Ă��܂��B 
�e�}�X�ɂ� 0 �� 1 ��������Ă���A�}�X i �ɂ� si��������Ă��܂��B
���ʂ��N�� 1 �������ꂽ�}�X�Ƀr�[�ʂ�u���܂��B 
�r�[�ʂ��u�����}�X���������邩���߂Ă��������B
*/

#include <iostream>
using namespace std;

int main()
{
	char s[3];
	int n = 0;
	cin >> s;
	for (char i : s)
	{
		if (i == '1')
		{
			n++;
		}
	}

	cout << n << endl;
	return 0;
}