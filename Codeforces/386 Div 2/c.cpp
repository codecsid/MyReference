/* Platform - Codeforces 386 Div 2
 * Username - rootn
 * ProblemName or Id -
 * Tag -
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int s, x1, x2, t1, t2, p, d;
    cin >> s >> x1 >> x2 >> t1 >> t2 >> p >> d;
    bool same_dir;
    if(d == 1)
        same_dir = (x1 < x2) ? true : false;
    else
        same_dir = (x2 < x1) ? true : false;
    if(t2 <= t1)
        cout << t2*abs(x1 - x2) << endl;
    else
    {
        int alone = t2*abs(x1 - x2), ttime;
        if(same_dir)
        {
            if(abs(x1-x2) <= abs(x2 - p))
            {
                if(p <= x1)
                    ttime = (x2 - p)*t1;
                else
                    ttime = (p - x2)*t1;
            }
            else
            {
                if(p <= x1)
                    ttime = (2*s + (p - x2))*t1;
                else
                    ttime = (2*s + (x2 - p))*t1;
            }
        }
        else
        {
            if(abs(x1-x2) <= abs(x2 - p))
            {
                if(p <= x1)
                    ttime = (2*p + (x2 - p))*t1;
                else
                    ttime = (2*(s-p) + (p - x2))*t1;
            }
            else
            {
                if(p <= x1)
                    ttime = (2*(s-p) + (p - x2))*t1;
                else
                    ttime = (2*p + (x2 - p))*t1;
            }
        }
        if(alone < ttime)
            cout << alone << endl;
        else
            cout << ttime << endl;
    }
}
