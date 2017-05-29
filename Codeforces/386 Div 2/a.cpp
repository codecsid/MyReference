/* Platform - Codeforces 386 Div 2
 * Username - rootn
 * ProblemName or Id -
 * Tag -
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int a, b, c;
    cin >> a >> b >> c;
    while(a*2 > b || a*4 > c)
        a--;
    if(a == 0) cout << '0' << endl;
    else cout << a+a*2+a*4 << endl;
}
