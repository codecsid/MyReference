#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    string s;
    cin >> s;
    int z = 0, o = 0, max = 0;
    for(char x: s)
    {
        if(x == '0')
        {
            if(o != 0)
            {
                if(o > max) max = o;
                o = 0;
            }
            z++;
        }
        else
        {
            if(z != 0)
            {
                if(z > max) max = z;
                z = 0;
            }
            o++;
        }
    }
    if(z > max) max = z;
    if(o > max) max = o;
    if(max >= 7)
        printf("YES\n");
    else
        printf("NO\n");
}
