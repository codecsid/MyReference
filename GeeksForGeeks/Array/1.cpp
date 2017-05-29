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
    vi my_int(10, 1);
    cout << sizeof(my_int) << endl;
    vi::iterator i = my_int.begin();
    while(i != my_int.end())
    {
        cout<< *i << endl;
        i++;
    }
}
