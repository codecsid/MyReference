/*
* Initialising the dp table using bottom approach.
* When we add the coin value to the sum and check the no. of coins
* at that sum value, if greater than 1 + current sum value, update it.
*/

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<int> s(n+1, INT_MAX);
    s[0] = 0;
    vector<int> coins = {1, 3, 5};
    for(int i = 0;i < 3;i++)
    {
        for(int j = 0;j < n-coins[i]+1;j++)
        {
            if(s[j + coins[i]] > 1 + s[j])
                s[j + coins[i]] = 1 + s[j];
        }
    }
    for(int x: s)
        cout << x << endl;
    cout << endl;

    // The Top Down approach

    s.assign(s.size(), INT_MAX);
    s[0] = 0;
    for(int i = 1;i < n+1;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            if(coins[j] <= i && s[i - coins[j]] < s[i])
                s[i] = s[i - coins[j]] + 1;
        }
    }
    cout << s[n] << endl;
}
