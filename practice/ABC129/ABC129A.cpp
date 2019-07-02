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
    	std::vector<int> a(3,0);
    	for (int i = 0; i < 3; i++)
    	{
    		std::cin >> a[i];
    	}
     
    	std::sort(a.begin(), a.end());
     
    	std::cout << a[0] + a[1] << std::endl;
     
    	return 0;
    }