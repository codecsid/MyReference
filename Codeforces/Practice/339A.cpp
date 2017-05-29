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
    string s;
    cin >> s;
    vi a;
    for(int i = 0;i < (int)s.size();i++)
    {
        char ch = s[i];
        if(ch != '+')
        a.push_back(atoi(&ch));
    }
    sort(a.begin(), a.end());
    cout << a[0];
    if(a.size() == 1)
        cout << endl;
    else
    {
        for(int i = 1;i < (int)a.size();i++)
            cout << "+" << a[i];
        cout << endl;
    }
}
