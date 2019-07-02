    #include <iostream>
    #include <iomanip>
    #include <vector>
    #include <map>
    #include <set>
    #include <unordered_set>
    #include <string>
    #include <algorithm>
    #include <limits>
    #include <iterator>
    #include <cmath>
    #include <numeric>
    #include <stack>
    using namespace std;
     
    template<class T> inline int GCD(T a, T b) { return b ? GCD(b, a % b) : a; }
     
    int main() {
    	int n; cin >> n;
    	vector<int> a(n); for (int i = 0; i < n; ++i) { cin >> a[i]; }
    	//左右から累積GCD
    	vector<int> l(n + 1, 0), r(n + 1, 0);
    	for (int i = 0; i < n; ++i) { l[i + 1] = GCD(l[i], a[i]); }
    	for (int i = n - 1; i >= 0; --i) { r[i] = GCD(r[i + 1], a[i]); }
     
    	//n-1個の累積GCD
    	int res = 0;
    	for (int i = 0; i < n; i++)
    	{
    		res = max(res, GCD(l[i], r[i + 1]));
    	}
    	cout << res << endl;
    	return 0;
    }