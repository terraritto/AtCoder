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
    	int n, m; cin >> n >> m;
    	vector<vector<int>> s(m);
    	for (int i = 0; i < m; i++)
    	{
    		int l; cin >> l;
    		for (int j = 0; j < l; j++)
    		{
    			int num; cin >> num; --num;
    			s[i].emplace_back(num);
    		}
    	}
     
    	vector<int> p(m);
    	for (int i = 0; i < m; i++) { cin >> p[i]; }
     
    	long long int ans = 0;
    	for (int bit = 0; bit < (1 << n); ++bit)
    	{
    		bool frag = true;
    		for (int i = 0; i < m; i++)
    		{
    			int con = 0;
    			for (auto j : s[i])
    			{
    				if (bit & (1 << j)) { con++; }
    			}
    			if (con % 2 != p[i]) { frag = false; }
    		}
    		if (frag == true) { ans++; }
    	}
     
    	cout << ans << endl;
    	return 0;
    }