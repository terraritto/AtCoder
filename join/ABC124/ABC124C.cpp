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
    string s;
    cin >> s;
    auto iter = s.begin()+1;
    int ans = 0;
    if (s.size() != 0) {
        for (;iter != s.end();iter++)
        {
            if (*(iter - 1) == *(iter))
            {
                ans++;
                if (*(iter) == '0') { *(iter) = '1'; }
                else { *(iter) = '0'; }
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}