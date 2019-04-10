#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

int main()
{
	std::vector<int> n(5),m;
	int k;
	for (int i = 0;i < 5;i++)
	{
		std::cin >> n[i];
		if (n[i] % 10 != 0) { m.push_back(10 - n[i] % 10); }

	}

	if (m.size() == 0) { m.push_back(0); }

	std::cout << std::accumulate(n.begin(), n.end(), 0) + std::accumulate(m.begin(), m.end(), 0)
		- *(std::max_element(m.begin(), m.end())) << std::endl;
	return 0;
}