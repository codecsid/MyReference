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
    scanf("%d", &t);
    while(t--)
    {
        int n;
        scanf("%d", &n);
        int max_ending_here = 0, max_so_far = INT_MIN;
        int v[n];
        for(int i = 0;i < n;i++)
        {
            scanf("%d", &v[i]);
        }
        for(int i = 0;i < n;i++)
        {
            max_ending_here += v[i];
            max_so_far = max(max_so_far, max_ending_here);
            if(max_ending_here < 0) max_ending_here = 0;
        }
        cout << max_so_far << endl;
    }
}
