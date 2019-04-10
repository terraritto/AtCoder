#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>

int main()
{
	std::vector<long long> n(5);
	long long k,ans; std::cin >> k;
	for (int i = 0;i < 5;i++) { std::cin >> n[i]; }

	ans = (k-1) / *(std::min_element(n.begin(), n.end())) + 5;

	std::cout << ans << std::endl;

	return 0;
}