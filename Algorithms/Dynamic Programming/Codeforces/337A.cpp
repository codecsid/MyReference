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
    int n, m;
    cin >> n >> m;
    vi v;
    for(int i = 0;i < m;i++)
    {
        int temp;
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());

    int best = INF;
    for(int i = 0;i <= m-n;i++)
        best = min(best, v[i+n-1] - v[i]);
    cout << best << endl;
}
