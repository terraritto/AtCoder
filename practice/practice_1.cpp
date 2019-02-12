/*
高橋君はデータの加工が行いたいです。
整数 a,b,cと、文字列 s が与えられます。
整数 a+b+c と、文字列 s を並べて表示しなさい。
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