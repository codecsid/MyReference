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
    cin >> n;
    vi len(n);
    for(int i = 0;i < n;i++)
        scanf("%d", &len[i]);
    sort(len.begin(), len.end());
    int c = len[n-1];
    int b = len[n-2];
    int a;
    int i = n-3;
    bool trian = false;
    while(i >= 0)
    {
        a = len[i];
        if(a + b > c && a + c > b)
        {
            trian = true;
            break;
        }
        else
        {
            b = len[i];
            c = len[i+1];
            i--;
        }
    }
    if(trian) cout << "YES" << endl;
    else cout << "NO" << endl;
}
