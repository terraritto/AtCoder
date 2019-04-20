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
using namespace std;
    
int main()
{
    int a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0;i < 2;i++)
    {
        if (a > b)
        {
            ans += a;
            a--;
        }
        else {
            ans += b;
            b--;
        }
    }
    
    cout << ans << endl;
    return 0;
}