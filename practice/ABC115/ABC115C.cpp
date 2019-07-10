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
    inline T GCD(T m, T n)
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
    inline T LCM(T m, T n)
    {
    	return m * n / GCD(m, n);
    }
     
    int main()
    {
    	long long int n, k; cin >> n >> k;
    	vector<long long int> h(n, 0);
     
    	for (int i = 0; i < n; i++)
    	{
    		cin >> h[i];
    	}
     
    	sort(h.begin(), h.end());
    	long long int ans = numeric_limits<int>::max();
    	for (auto iter = h.begin(); iter != (h.end()-k+1);++iter)
    	{
    		ans = ans > * (iter + k-1) - *iter ? *(iter + k-1) - *iter : ans;
    	}
     
    	cout << ans << endl;
    	return 0;
    }