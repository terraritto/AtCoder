    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <map>
    #include <set>
    #include <unordered_set>
    #include <unordered_map>
    #include <string>
    #include <algorithm>
    #include <limits>
    #include <iterator>
    #include <cmath>
    #include <numeric>
    #include <stack>
    #include <cassert>
    #include <forward_list>
    #include <chrono>
    #include <deque>
    #include <list>
    #include <random>
    #include <cstdio>
    #include <sstream>
     
    int main()
    {
    	int n, l;
    	
    	std::cin >> n >> l;
    	
    	std::vector<int> num(n);
    	
    	for (int i = 0; i < n; i++)
    	{
    		num[i] = l + (i + 1) - 1;
    	}
     
    	std::sort(num.begin(), num.end(), [](int a, int b) {return std::abs(a) > std::abs(b); });
     
    	std::cout << std::accumulate(num.begin(), num.end() - 1, 0) << std::endl;
     
    	return 0;
    }