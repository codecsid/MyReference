/* Platform - Codeforces
* Username - rootn
* ProblemName or Id -
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;
typedef vector<int> vi;

int main(void)
{
    int a;
    float b;
    cin >> a >> b;
    int x = a > b ? sqrt(a) : sqrt(b);
    int ra = a - x*x;
    int rb = b - x*(x+1);
    if(ra < 0)
        cout << "vladik" << endl;
    else if(rb < 0)
        cout << "valera" << endl;
    else
    {
        int na = 1 + 2*x;
        int nb = 2 + 2*x;
        if(ra >= na)
            cout << "valera" << endl;
        else
            cout << "vladik" << endl;
    }

}
