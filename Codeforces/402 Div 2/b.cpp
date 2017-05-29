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
    int n, k;cin >> n >> k;
    if(n == 0)
    {
        cout << "0" << endl;
        return 0;
    }
    int w = 0;
    int z = 0, r;
    while(n > 0 && z < k)
    {
        r = n % 10;
        if(r == 0)z++;
        else w++;
        n = n/10;
    }
    if(k > z && z > 0)
    {
        cout << w+z-1 << endl;
    }
    else
        cout << w << endl;
}
