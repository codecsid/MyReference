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
    int t;
    cin >> t;
    vi v(t);
    for(int i = 0;i < t;i++)
        cin >> v[i];
    sort(v.begin(), v.end());
    int val = 0;
    for(int i = 0;i < t-1;i++)
    {
        val += v[t-1] - v[i];
    }
    cout << val << endl;
}
