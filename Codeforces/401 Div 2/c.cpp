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
    int n, m, k;
    cin >> n >> m;
    int arr[n][m];
    for(int i = 0;i < n;i++)
    {
        for(int j = 0;j < m;j++)
            scanf("%d", &arr[i][j]);
    }

    // Pre Processing.

    vector<set<pair<int, int>>>  v(m);
    for(int j = 0;j < m;j++)
    {
        int smallest = 0, greatest = 0;
        for(int i = 0;i < n-1;i++)
        {
            if(arr[i][j] <= arr[i+1][j])
            {
                greatest++;
                if(greatest == n-1)
                v[j].insert(make_pair(smallest, greatest));
            }
            else
            {
                v[j].insert(make_pair(smallest, greatest));
                smallest = greatest+1;
                greatest++;
                if(greatest == n-1)
                    v[j].insert(make_pair(smallest, greatest));
            }
        }
    }


    cin >> k;
    int l, r;
    while(k--)
    {
        bool mat = false;
        scanf("%d %d", &l, &r);
        l = l-1;r = r-1;
        if(l == r)
        {
            printf("Yes\n");
            continue;
        }
        else
        {
            for(int j = 0;j < m;j++)
            {
                auto x = v[j].find(r);

                if(mat)break;
            }
            if(mat)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
}
