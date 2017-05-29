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
    string a, b;
    cin >> a;
    cin >> b;
    int lena = a.size();
    int lenb = b.size();
    if(a != b)
        cout << ((lena > lenb) ? lena : lenb) << endl;
    else
    {
        int i = 0;
        for(;i < lena;i++)
        {
            if(a[i] != b[i])
                break;
        }
        if(i == lena)
            cout << "-1" << endl;
        else
            cout << lena << endl;
    }
}
