/*
 * Program ID(UVA) - 10137
 * Program Name - The Trip
 * Source - Programming Challenges
 * Tag - Implementation.
 */

#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    while(n)
    {
        int a[n];
        double sum = 0, temp;
        for(int i = 0;i < n;++i)
            cin >> temp, temp = temp*1000, a[i] = temp, sum+= a[i];
        int avg = sum/n;
        double change = 0.00;
        for(int i = 0;i < n;i++)
        {
            if( a[i] < avg)
                change = change + (avg - a[i])/10;
        }
        change = change / 100;
        printf("%.2f\n", change);
        cin >> n;
    }
}
