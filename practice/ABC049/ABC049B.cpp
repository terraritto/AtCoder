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
    	int h, w;
    	cin >> h >> w;
    	vector<string> s(h);
    	
    	for (int i = 0; i < h;i++)
    	{
    		cin >> s[i];
    	}
     
    	for (int i = 0;i < h;i++)
    	{
    		cout << s[i] << endl;
    		cout << s[i] << endl;
    	}
     
    	return 0;
    }