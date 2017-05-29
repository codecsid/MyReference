#include<bits/stdc++.h>
using namespace std;

int maxDonations(vector<int> donations)
{
    int s = donations.size();
    vector<pair<bool, int>> dp(s);
    dp[0] = make_pair(true, donations[0]);
    dp[1] = make_pair(false, donations[1]);
    dp[2] = make_pair(true, donations[2] + donations[0]);

    // The DP table is filled using the maximum of the (i-2)th and (i-3)th element and adding it to current element.
    // However, for the last element, we have to check if the maximum one inculdes the first one or not, as it is
    // neighbor to the last one. Therefore, we also keep track of involvement of first element using a boolean.
    // As we can get the maximum at both positions s-2 and s-1, we take maximum of them.

    for(int i = 3;i < s-1;++i)
    {
        dp[i] = dp[i-2].second > dp[i-3].second ? make_pair(dp[i-2].first, dp[i-2].second + donations[i]) : make_pair(dp[i-3].first, dp[i-3].second + donations[i]);
    }

    // if both (i-2)th and (i-3)th elements involve the first element then we have to remove first element if
    // last element is greater than first element.
    
    pair<bool, int> max = dp[s-3].second > dp[s-4].second ? make_pair(dp[s-3].first, dp[s-3].second) : make_pair(dp[s-4].first, dp[s-4].second);
    if(max.first)
    {
        if(donations[s-1] > donations[0])
            max.second = max.second - donations[0] + donations[s-1];
    }
    else
        max.second += donations[s-1];
    return dp[s-2].second > max.second ? dp[s-2].second : max.second;
}

int main(void)
{
    vector<int> donations;
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> donations(n);
        for(int i = 0;i < n;i++)
            cin >> donations[i];
        cout << maxDonations(donations) << endl;
    }
}
