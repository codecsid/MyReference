#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        vector<int> sequence(n);
        for(int i = 0;i < n;i++)
        {
            cin >> sequence[i];
        }
        vector<pair<int, bool>> dp(n, make_pair(1, true));
        for(int i = 0;i < n-1;++i)
        {
            for(int j = i+1;j < n;++j)
            {
                if(i == 0)
                {
                    if(sequence[j] != sequence[i])
                    {
                        dp[j].first = 2;
                        if(sequence[j] < sequence[i])
                            dp[j].second = false;
                        if(sequence[j] > sequence[i])
                            dp[j].second = true;
                    }

                }
                else
                {
                    if((dp[i].second == true && sequence[j] < sequence[i]) || (dp[i].second == false && sequence[j] > sequence[i]))
                    {
                        if(dp[j].first < dp[i].first + 1)
                            dp[j].first = dp[i].first + 1;
                        dp[j].second = dp[i].second ? false : true;
                    }
                }
            }
        }
        int max = dp[0].first;
        for(auto i: dp)
        {
            if(max < i.first)
                max = i.first;
        }
        cout << max << endl;
    }
}
