/*
 * Program ID(UVA) - 10189
 * Program Name - Minesweeper
 * Source - Programming Challenges
 * Tag - Implementation.
 */

#include<bits/stdc++.h>
using namespace std;

int checkAdjacentMines(string mine[], int i, int j, int rmax, int cmax)
{
    int count = 0;char m = '*';
    bool ur = true, br = true, lc = true, rc = true;
    if(i == 0)ur = false;
    if(j == 0)lc = false;
    if(i == rmax-1)br = false;
    if(j == cmax-1)rc = false;
    if(ur && lc && mine[i-1][j-1] == m)count++;
    if(ur && mine[i-1][j] == m)count++;
    if(ur && rc && mine[i-1][j+1] == m)count++;
    if(lc && mine[i][j-1] == m)count++;
    if(rc && mine[i][j+1] == m)count++;
    if(br && lc && mine[i+1][j-1] == m)count++;
    if(br && mine[i+1][j] == m)count++;
    if(br && rc && mine[i+1][j+1] == m)count++;
    return count;
}

int main(void)
{
    int a, b;cin >> a >> b;
    string temp;
    while(a && b)
    {
        string mine[a];
        for(int i = 0;i < a;++i)
            cin >> mine[i];
        for(int i = 0;i < a;++i)
        {
            for(int j = 0;j < b;++j)
            {
                if(mine[i][j] != '*')
                cout << checkAdjacentMines(mine, i, j, a, b);
                else
                cout << '*';
            }
            cout << endl;
        }
        cin >> a >> b;
    }
}
