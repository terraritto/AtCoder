#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	int num = 0;
	int count = 0;
	cin >> n >> m;
	vector<vector<int>> item = vector<vector<int>>(n,vector<int>(m+1,0));
	
	for (int i = 0; i < n;i++)
	{
		cin >> item[i][0];
		for (int j = 0;j < item[i][0];j++)
		{
			cin >> item[i][j+1];
		}
	}
	vector<int> ans(m,0);
	for(int i = 0;i < n;i++)
	{
		for (int j = 0;j < item[i][0];j++)
		{
			ans[item[i][j + 1]-1]++;
		}
	}
	for (int i : ans)
	{
		if (i == n)
		{
			count++;
		}
	}

	cout << count << endl;

	return 0;
}