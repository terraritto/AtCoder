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
int n;
    
int dfs(int i,int j,int sum,vector<int> a)
{
    int ans = 0;
    
    if (i == 1 && j == n-1) { return sum + a[j + i * n]; }
    if (i >= 2) return -1;
    if (j >= n) return -1;
    
    ans = max(ans, dfs(i + 1, j, sum + a[j + i * n],a));
    ans = max(ans, dfs(i, j + 1, sum + a[j + i * n],a));
    
    return ans;
}
    
int main()
{
    cin >> n;
    std::vector<int> a1(n * 2);
    for (int i = 0;i < n*2;i++) { cin >> a1[i]; }
    
    cout << dfs(0,0,0,a1) << endl;
    
    return 0;
}