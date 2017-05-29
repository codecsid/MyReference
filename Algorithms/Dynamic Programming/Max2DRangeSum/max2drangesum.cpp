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
        int m, n;
        scanf("%d %d", &m, &n);
        int v[m][n];
        for(int i = 0;i < m;i++){
            for(int j = 0;j < n;j++){
                scanf("%d", &v[i][j]);
                if(i) v[i][j] += v[i-1][j];
                if(j) v[i][j] += v[i][j-1];
                if(i && j) v[i][j] -= v[i-1][j-1];
                cout << v[i][j] << " ";
            }
            cout << endl;
        }
        int maxt = INT_MIN, maxsub;
        for(int i = 0;i < m;i++)for(int j = 0;j < n;j++)
        for(int k = i;k < m;k++)for(int l = j;l < n;l++)
        {
            maxsub = v[k][l];
            if(i < 0) maxsub -= v[i-1][l];
            if(j < 0) maxsub -= v[k][j-1];
            if(i && j) maxsub += v[i-1][j-1];
            maxt = max(maxt, maxsub);
        }
        cout << maxt << endl;

    }
}
