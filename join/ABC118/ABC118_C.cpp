#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> monster(n, 0);
	for (int i = 0;i < n;i++)
	{
		cin >> monster[i];
	}

	bool res = true;
	int ans;
	while (res)
	{
		sort(monster.begin(), monster.end());
		int min = monster[0];
		for (int i = 1;i < monster.size();i++)
		{
			monster[i] %= min;
		}
		monster.erase(remove(monster.begin(), monster.end(), 0), monster.end());
		ans = min;
		if (monster.size() == 1)
		{
			break;
		}
	}

	cout << ans << endl;

	return 0;
}