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
    string s, m;
    cin >> n;
    cin >> s;
    cin >> m;
    vi sh;
    vi mo;
    for(int i = 0;i < n;i++)
    {
        sh.push_back(s[i] - '0');
        mo.push_back(m[i] - '0');
    }
    sort(sh.begin(), sh.end());
    sort(mo.begin(), mo.end());
    int mor_min = 0, sher_max = 0;
    for(int i = 0;i < n;i++)
    {
        if(sh[i] > mo[i])
            mor_min++;
    }
    cout << mor_min << endl;
    int i = 0, j = 0;
    while(i < n && j < n)
    {
        if(sh[i] < mo[j])
        {
            i++;j++;sher_max++;
        }
        else
            j++;
    }
    cout << sher_max << endl;
}
