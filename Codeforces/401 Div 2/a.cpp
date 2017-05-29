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
    int n, x;
    cin >> n >> x;
    while(x != 1)
    {
        if(n % 2 == 0)
        {
            if(x == 2) x = 1;
            else if(x == 1) x = 2;
        }
        else
        {
            if(x == 1) x = 0;
            else if(x == 0) x = 1;
        }
        n--;
    }
    n = n % 6;
    while(n != 0)
    {
        if(n % 2 == 0)
        {
            if(x == 2) x = 1;
            else if(x == 1) x = 2;
        }
        else
        {
            if(x == 1) x = 0;
            else if(x == 0) x = 1;
        }
        n--;
    }
    cout << x << endl;
}
