#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

ll numWays(int width, int height, vector<string> bad)
{
    ll dp[width+1][height+1];
    memset(dp, -1, sizeof(dp));
    int bad_length = bad.size();
    for(int i = 0;i < bad_length;i++)
    {
        string a, b, c, d;
        int x1, y1, x2, y2;
        int p = 0;
        int sl = bad[i].size();
        for(int j = 0;j < sl;j++)
        {
            switch(p)
            {
                case 0:
                    if(bad[i][j] == ' ')
                    {
                        x1 = stoi(a);
                        p++;
                    }
                    else
                        a += bad[i][j];
                    break;
                case 1:
                    if(bad[i][j] == ' ')
                    {
                        y1 = stoi(b);
                        p++;
                    }
                    else
                        b += bad[i][j];
                    break;
                case 2:
                    if(bad[i][j] == ' ')
                    {
                        x2 = stoi(c);
                        p++;
                    }
                    else
                        c += bad[i][j];
                    break;
                case 3:
                    if(bad[i][j] == ' ' || j == sl-1)
                    {
                        d += bad[i][j];
                        y2 = stoi(d);
                        p++;
                    }
                    else
                        d += bad[i][j];
                    break;
            }
        }
        if(x1 == x2)
        {
            int gy = y1 > y2 ? y1 : y2;
            dp[x1][gy] = -2; // You can come from above only
        }
        if(y1 == y2)
        {
            int gx = x1 > x2 ? x1 : x2;
            dp[gx][y1] = -3; // You can come from left only.
        }
    }

    //Filling up the dp table.
    dp[0][0] = 1;
    //for first row;
    int i = 1;
    while(i <= height)
    {
        if(dp[0][i] == -1)
        {
            dp[0][i] = 1;
            i++;
        }
        else
            while(i <= height) dp[0][i++] = 0;
    }

    //for first column

    i = 1;
    while(i <= width)
    {
        if(dp[i][0] == -1)
        {
            dp[i][0] = 1;
            i++;
        }
        else
            while(i <= width) dp[i++][0] = 0;
    }

    // for rest of the tagble
    for(int i = 1;i <= width;i++)
    {
        for(int j = 1;j <= height;j++)
        {
            switch(dp[i][j])
            {
                case -1:
                    dp[i][j] = dp[i-1][j] + dp[i][j-1];
                    break;
                case -2:
                    dp[i][j] = dp[i-1][j];
                    break;
                case -3:
                    dp[i][j] = dp[i][j-1];
                    break;
            }
        }
    }
    return dp[width][height];
}

int main(void)
{
    int width = 6, height = 6;

    vector<string> v = {"0 0 0 1","6 6 5 6"};

    cout << numWays(width, height, v);

}
