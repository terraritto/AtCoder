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
    	int d;
    	cin >> d;
    	string s = " Eve";
    	string ans = "Christmas";
    	for (int i = 0; i < 25 - d; i++) { ans = ans + s; }
    	cout << ans << endl;
     
    	return 0;
    }