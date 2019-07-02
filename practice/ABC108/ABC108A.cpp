    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <array>
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
    #include <queue>
    #include <cassert>
    #include <forward_list>
    #include <chrono>
    #include <deque>
    #include <list>
    #include <random>
    #include <cstdio>
    #include <sstream>
     
    using namespace std;
     
    int main()
    {
    	int a; cin >> a;
    	if (a % 2 == 0) {
    		cout << (a/2) * (a/2) << endl;
    	}
    	else
    	{
    		cout << (a / 2) * (a / 2+1) << endl;
     
    	}
    	return 0;
    }