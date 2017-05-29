#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int num = n/2;
    printf("%d\n", num);
    if(n & 1)
    {
        for(int i = 1;i < num;i++)
            printf("2 ");
        printf("3\n");
    }
    else
    {
        for(int i = 0;i < num;i++)
            printf("2 ");
        printf("\n");
    }

}
