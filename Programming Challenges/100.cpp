/*
 * Program ID(UVA) - 100
 * Program Name - 3n + 1 Problem
 * Source - Programming Challenges
 * Tag - DP
 */

#include<bits/stdc++.h>
using namespace std;

#define MAX 99999
#define INF 0x3f3f3f3f
#define FOR(i, a, b) for(int i = a;i < b;i++)
#define FOR(i, a) for(int i = 0;i < a;i++)

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> ii;
typedef vector<ii> vii;

int func(int arr[], int x)
{
    if(x == 2)
        return 2;
    if(x > MAX)
    {
        int count = 1;
        while(x > MAX)
        {
            if(x & 1)
                x = x*3 + 1;
            else
                x = x/2;
            count++;
        }
        return count + func(arr, x);
    }
    else 
    {
        if(arr[x] > 0)
            return arr[x];
        if(x&1)
            arr[x] = 1 + func(arr, x*3 + 1);
        else
            arr[x] = 1 + func(arr, x/2);
    }
    return arr[x];
}

int main(void)
{
    int arr[100000];
    memset(arr, -1, sizeof(arr));
    arr[1] = 1;
    arr[2] = 2;
    int val = 0;
    for(int i = MAX;i >= 3;--i)
    {
        if(arr[i] < 0)
        arr[i] = func(arr, i);
        cout << arr[i] << " ";
    }
    cout << val << endl;
}
