/* Platform - Codeforces 386 Div 2
 * Username - rootn
 * ProblemName or Id -
 * Tag -
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, k;
    cin >> n;
    char s[n+1];
    scanf("%s", &s[0]);
    deque<char> q;
    deque<char>::iterator it;
    if(n&1)
    {
        q.push_back(s[0]);
        k = 1;
        while(k < n)
        {
            if(k &1)
                q.push_front(s[k++]);
            else
                q.push_back(s[k++]);
        }
        for(it = q.begin();it != q.end();it++)
            cout << *it;
        cout << endl;
    }
    else
    {
        q.push_back(s[0]);
        q.push_back(s[1]);
        k = 2;
        while(k < n)
        {
            if(k & 1)
                q.push_back(s[k++]);
            else
                q.push_front(s[k++]);
        }
        for(it = q.begin();it != q.end();it++)
            cout << *it;
        cout << endl;
    }
}
