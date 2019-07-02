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
    	int a, b;
    	std::cin >> a >> b;
    	if (a <= 5) std::cout << 0 << std::endl;
    	else if (a <= 12) std::cout << b / 2 << std::endl;
    	else if (a >= 13) std::cout << b << std::endl;
    	return 0;
    }