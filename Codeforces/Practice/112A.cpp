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
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int i = 0, j = 0;
    bool minusone;
    while(i < (int)s1.size() && j < (int)s2.size())
    {
        int ch1 = s1[i], ch2 = s2[j];
        ch1 = tolower(ch1);
        ch2 = tolower(ch2);
        if(ch1 == ch2)
        {
            i++;j++;
            continue;
        }
        else if(ch1 < ch2)
        {
            minusone = true;
            break;
        }
        else
        {
            minusone = false;
            break;
        }
        i++;
        j++;
    }
    if(i == (int)s1.size() || j == (int)s2.size())
    {
        if(i < j)
            cout << "-1" << endl;
        else if(i > j)
            cout << "1" << endl;
        else
            cout << "0" << endl;
    }
    else
    {
        if(minusone)
            cout << "-1" << endl;
        else
            cout << "1" << endl;
    }
}
