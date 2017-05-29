#include <bits/stdc++.h>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int apples[n][m];
        for(int i = 0;i < n;i++)
            for(int j = 0;j < m;j++)
                cin >> apples[i][j];
        int dp[n][m];
        dp[0][0] = apples[0][0];
        for(int i = 1;i < m;i++)
            dp[0][i] = apples[0][i] + dp[0][i-1];
        for(int i = 1;i < n;i++)
            dp[i][0] = apples[i][0] + dp[i-1][0];
        for(int i = 1;i < n;i++)
            for(int j = 1;j < m;j++)
                dp[i][j] = apples[i][j] + max(dp[i-1][j], dp[i][j-1]);
        cout << dp[n-1][m-1] << endl;
    }
}
