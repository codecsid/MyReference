#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, temp, ones = 0, twos = 0, threes = 0, fours = 0;
    cin >> n;
    while(n--)
    {
        cin >> temp;
        switch(temp)
        {
            case 1: ones++;break;
            case 2: twos++;break;
            case 3: threes++;break;
            case 4: fours++;break;
        }
    }
    int tn = 0;
    if(ones > 0)
    {
        if(threes >= ones)
            ones = 0;
        else
            ones -= threes;
    }
    tn += threes;
    tn += fours + twos/2 + ones/4;
    ones = ones % 4;
    if(twos % 2)
    {
        if(ones < 3)tn+=1;
        if(ones == 3) tn+=2;
    }
    else if(ones > 0) tn += 1;
    cout << tn << endl;

}
