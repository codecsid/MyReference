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
    int n;
    scanf("%d", &n);
    int cnt[n];
    memset(cnt, 0, sizeof(cnt));
    for(int i = 0;i < n;i++)
    {
        int temp;
        scanf("%d", &temp);
        cnt[temp]++;
    }
    ll f[n];
    f[0] = 0;
    for(int i = 1;i < n;i++)
    {
        f[i] = (ll)i * cnt[i];
        if(i > 1)
        {
            f[i] += f[i-2];
        }
        if(f[i-1] > f[i])
            f[i] = f[i-1];
    }
    cout << f[n-1] << endl;
}
