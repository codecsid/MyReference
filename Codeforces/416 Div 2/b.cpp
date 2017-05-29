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
    vi v(n);
    for(int i = 0;i < n;i++)
        scanf("%d", &v[i]);
    while(m--)
    {
        int l, r, p;
        scanf("%d %d %d", &l, &r, &p);
        l--, p--, r--;
        int current = v[p];
        int smaller = 0;
        for(int i = l;i <= r;i++)
        {
            if(v[i] < current)
                smaller++;
        }
        if(smaller > p-l || smaller < p-l)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}
