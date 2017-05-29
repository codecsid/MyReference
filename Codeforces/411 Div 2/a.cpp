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
    if(n%2 == 0)
        cout << n/2 - 1 << endl;
    else
        cout << floor(n/2) << endl;
}
