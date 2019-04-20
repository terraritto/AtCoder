    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <map>
    #include <set>
    #include <string>
    #include <algorithm>
    #include <limits>
    #include <iterator>
    #include <cmath>
    #include <numeric>
    #include <stack>
    using namespace std;
     
    int main()
    {
    	int n, k, x, y;
    	cin >> n >> k >> x >> y;
    	
    	cout << min(n,k) * x + (n-k>0 ? n-k:0) *y << endl;
    	return 0;
    }