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
    	int n;
    	cin >> n;
    	vector<int> v(n),c(n);
    	for (int i = 0; i < n; i++) { cin >> v[i]; }
    	for (int i = 0; i < n; i++) { cin >> c[i]; }
     
    	int ans = 0;
    	for (int i = 0; i <n; i++)
    	{
    		ans += v[i] - c[i] > 0 ? v[i] - c[i] : 0;
    	}
    	cout << ans << endl;
    	return 0;
    }