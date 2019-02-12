/*
すぬけ君は 1,2,3 の番号がついた 3 つのマスからなるマス目を持っています。 
各マスには 0 か 1 が書かれており、マス i には siが書かれています。
すぬけ君は 1 が書かれたマスにビー玉を置きます。 
ビー玉が置かれるマスがいくつあるか求めてください。
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