// Largest Sum Contiguous Array.
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
    vi arr = {-5, -3, -2, -4, -5, -6, -1, -2};
    int s = arr.size();
    int max_so_far = INT_MIN    , max_ending_here = 0, start = 0, end = 0, s = 0;
    for(int i = 0;i < s;i++)
    {
        max_ending_here += arr[i];
        if(max_so_far < max_ending_here)
        {
            max_so_far = max_ending_here;
            start = s;
            end = i;
        }
        if(max_ending_here < 0)
        {
            max_ending_here = 0;
            s = i + 1;
        }
    }
    cout << max_so_far << endl;
}
