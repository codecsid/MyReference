#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    long long max[50];
    max[0] = 1;
    for(int i = 1;i < 50;++i)
        max[i] = max[i-1]*2 + 1;

    long long n, k; scanf("%I64d %I64d", &n, &k);
    long long value = max[n-1];
    long long cur_index = (value-1)/2; k -= 1;
    long long cur_value = n;
    while(cur_index != k)
    {
        if(cur_index > k)
            cur_index -= (cur_index/2) + 1;
        if(cur_index < k)
            cur_index += (cur_index/2) + 1;
        cur_value--;
    }
    cout << cur_value << endl;
}
