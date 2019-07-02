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
    	std::string a;
    	std::cin >> a;
    	for (auto iter = a.begin(); iter != a.end() - 1; ++iter)
    	{
    		if (*iter == *(iter + 1)) {
    			std::cout << "Bad" << std::endl;
    			break;
    		}
     
    		if (iter == a.end() - 2)
    		{
    			std::cout << "Good" << std::endl;
    		}
    	}
     
    	return 0;
    }