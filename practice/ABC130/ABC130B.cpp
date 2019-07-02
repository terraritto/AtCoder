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
    	int n, x;
    	std::cin >> n >> x;
    	std::vector<int> L(n+1);
    	L[0] = 0;
    	for (int i = 1; i < n+1; i++)
    	{
    		std::cin >> L[i];
    	}
    	
    	int ans = 0;
    	for (int i = 0; i < n+1; i++)
    	{
    		ans += L[i];
     
    		if (ans > x)
    		{
    			std::cout << i << std::endl;
    			break;
    		}
    		else if (i == n)
    		{
    			std::cout << i+1 << std::endl;
    		}
    	}
     
    	return 0;
    }