/* Platform - Codeforces
* Username - rootn
* ProblemName or Id -
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;
typedef vector<int> vi;

int main(void)
{
    int n;scanf("%d", &n);
    int a[n];
    for(int i = 0;i < n;i++)
        scanf("%d", &a[i]);
    vi dp(n, 1);
    for(int i = 1;i < n;i++)
        if(a[i] >= a[i-1]) dp[i] += dp[i-1];
    int max = 0;
    for(int i = 0;i < n;i++)
    {
        if(dp[i] > max)
            max = dp[i];
    }
    cout << max << endl;
}
