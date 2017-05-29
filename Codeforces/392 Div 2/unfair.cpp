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
    ll n, m, k, x, y;
    cin >> n >> m >> k >> x >> y;
    ll one_round = m * (2*n - 1);
    ll max = 0, min = 0, s = 0;

    if(k >= one_round)
    {
        min = k/one_round;
        max = 2*min;
        if(x < n)
            s = max;
        else
            s = min;
        k = k%one_round;
    }
    if(k < one_round)
    {
        int temp = k/m;
        if(temp < n)
        {
            max += 1;
            if(x <= temp) s += 1;
            else if(x == temp+1 && y <= k%m)
                s += 1;
        }
        else if(temp == n)
        {
            max += 1;
            min += 1;
            if(x <= temp)s += 1;
            if(k > temp*m)
            {
                if(x == temp-1 && y <= k%m)
                    s += 1;
            }
            if(k%m)
                max += 1;
        }
        else
        {
            max += 2;
            min += 1;
            s += 1;
            if(x != n)
            {
                if(x >= n - (temp - n))
                    s += 1;
                else if(x == n - (temp - n) - 1 && y <= k%m)
                    s += 1;
            }
        }
    }
    cout << max << " " << min << " " << s << endl;
}
