/* Platform - Codeforces 387 Div 2
 * Username - rootn
 * ProblemName or Id - A
 * Tag -
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    float root = sqrt(n);
    int base = floor(root);
    int top = ceil(root);
    int pixels = base * top;
    while(pixels != n)
    {
        if(pixels < n)
            top ++;
        if(pixels > n)
            base --;
        pixels = base * top;
    }
    if(base < top)
        cout << base << " " << top << endl;
    else
        cout << top << " " << base << endl;
}
