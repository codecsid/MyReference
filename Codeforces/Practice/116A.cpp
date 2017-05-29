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
    int n;cin >> n;
    int max = 0;
    int cur = 0;
    for(int i = 0;i < n;i++)
    {
        int a, b;
        cin >> a >> b;
        cur = cur + b - a;
        if(cur > max)
            max = cur;
    }
    cout << max << endl;
}
