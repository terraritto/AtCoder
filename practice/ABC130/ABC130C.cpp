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
     
    //最大公約数
    template<class T>
    T GCD(T m, T n)
    {
    	T temp;
    	while (m % n != 0)
    	{
    		temp = n;
    		n = m % n;
    		m = temp;
    	}
    	return n;
    }
     
    //最小公倍数
    template<class T>
    T LCM(T m, T n)
    {
    	return m * n / GCD(m, n);
    }
     
    int main()
    {
    	long long int W, H, x, y;
    	cin >> W >> H >> x >> y;
     
    	double area = static_cast<double>(W) * static_cast<double>(H) / 2;
    	bool sign = 2 * x == W && 2 * y == H;
     
    	cout << area << " " << sign << endl;
     
    	return 0;
    }