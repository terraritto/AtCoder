/*
�V�J��AtCoDeer����͓�̐����� a,b �������܂����B a �� b �̐ς�������������肵�Ă��������B
*/
#include <iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	if ((a*b) % 2 == 0) {
		cout << "Even" << endl;
	}
	else
	{
		cout << "Odd" << endl;
	}

	return 0;
}