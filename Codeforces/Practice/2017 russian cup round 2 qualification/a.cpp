#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int t;cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        int max = n*m;
        int a[20][20];
        int i = 0, j = 0, cr;
        while(i < n && j < m)
        {
            cr = i;
            for(;j < m && i >= 0;j++)
            {
                a[i][j] = max;
                i--;max--;
            }
            i = ++cr;
            j = 0;
        }
        if(i == n)
        {
            i = n-1;
            j = 1;
            while(j < m)
            {
                cr = j;
                for(;j < m && i >= 0;j++)
                {
                    a[i][j] = max;
                    i--;max--;
                }
                j = ++cr;
                i = n-1;
            }
        }
        for(int i = 0;i < n;i++){
            for(int j = 0;j < m;j++){
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }
}
