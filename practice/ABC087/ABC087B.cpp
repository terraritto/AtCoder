/*
���Ȃ��́A500 �~�ʂ� A ���A100 �~�ʂ� B ���A50 �~�ʂ� C �������Ă��܂��B 
�����̍d�݂̒����牽������I�сA���v���z�����傤�� X�~�ɂ�����@�͉��ʂ肠��܂����B
������ނ̍d�݂ǂ����͋�ʂł��܂���B
2 �ʂ�̍d�݂̑I�ѕ��́A�����ނ̍d�݂ɂ��Ă��̍d�݂�I�Ԗ������قȂ�Ƃ���ʂ���܂��B
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