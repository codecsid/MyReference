#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0;i < n;i++)
            cin >> a[i];
        vector<int> dp(n, 1);
        for(int i = 0;i < n-1;i++)
        {
            for(int j = i+1;j < n;j++)
            {
                if(a[i] <= a[j])
                {
                    if(dp[i]+1 > dp[j])
                        dp[j] = dp[i]+1;
                }
            }
        }
        int max = dp[0];
        for(int x: dp)
        {
            if(max < x)
                max = x;
        }
        cout << max << endl;
    }
}
