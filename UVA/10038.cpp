/* Platform - UVa
* Username - shraddheshh
* ProblemName or Id - 10038
* Tag -
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;
typedef vector<int> vi;

int main(void)
{
    int n;
    while(scanf("%d", &n) != EOF)
    {
        vi v;
        int temp;
        vector<bool> val(n, false);
        for(int i = 0;i < n;i++)
        {
            scanf("%d", &temp);
            v.push_back(temp);
        }
        for(int i = 0;i < n-1;i++)
        {
            if(abs(v[i] - v[i+1]) >= 1 && abs(v[i] - v[i+1]) <= n-1)
                val[abs(v[i] - v[i+1])] = true;
        }
        int x = 0;
        for(int i = 1;i < n;i++)
            if(val[i]) x++;
        if(x == n-1) cout << "Jolly" << endl;
        else cout << "Not jolly" << endl;
    }
}
