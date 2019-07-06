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
    	int n,k; cin >> n >> k;
    	vector<int> h(n);
    	for (int i = 0; i < n; i++)
    	{
    		cin >> h[i];
    	}
     
    	vector<int> dp(n,numeric_limits<int>::max());
    	dp[0] = 0; dp[1] = abs(h[1] - h[0]);
     
    	for (int i = 2; i < n; i++)
    	{
    		for (int j = 1; j < k+1; j++)
    		{
    			if (i - j < 0) { break; }
    			else {dp[i] = min(abs(h[i - j] - h[i]) + dp[i - j], dp[i]); }
    		}
    	}
    	cout << dp[n-1] << endl;
    	return 0;
    }