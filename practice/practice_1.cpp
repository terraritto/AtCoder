/*
�����N�̓f�[�^�̉��H���s�������ł��B
���� a,b,c�ƁA������ s ���^�����܂��B
���� a+b+c �ƁA������ s ����ׂĕ\�����Ȃ����B
*/

#include <iostream>
#include <string>
using namespace std;

int main() {
	int a, b, c;
	string s;
	cin >> a;
	cin >> b >> c;
	cin >> s;

	cout << a + b + c << " " << s << endl;
	
	return 0;
}