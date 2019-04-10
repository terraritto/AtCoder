#include <iostream>
#include <vector>

int main()
{
	std::vector<int> n(5);
	int k;
	for (int i = 0;i < 5;i++)
	{
		std::cin >> n[i];
	}
	std::cin >> k;

	if (n[4] - n[0] <= k)
	{
		std::cout << "Yay!" << std::endl;
	}
	else
	{
		std::cout << ":(" << std::endl;
	}

	return 0;
}