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
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0;i < n;i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0;i < n;i++){
        scanf("%d", &b[i]);
    }
    int l1, m1, x1, y1, p1;
    int l2, m2, x2, y2, p2;
    l1 = m1 = x1 = y1 = p1 = l2 = m2 = x2 = y2 = p2 = 0;

    for(int i = 0;i < n;i++)
    {
        switch(a[i])
        {
            case 1: l1++;break;
            case 2: m1++;break;
            case 3: x1++;break;
            case 4: y1++;break;
            case 5: p1++;break;
        }
        switch(b[i])
        {
            case 1: l2++;break;
            case 2: m2++;break;
            case 3: x2++;break;
            case 4: y2++;break;
            case 5: p2++;break;
        }
    }

    if((l1+l2)%2 == 0 && (m1+m2)%2 == 0 && (x1+x2)%2 == 0 && (y1+y2)%2 == 0 && (p1+p2)%2 == 0)
    {
        int l, m, x, y, p;

        l = (max(l1, l2) - min(l1, l2));
        m = (max(m1, m2) - min(m1, m2));
        x = (max(x1, x2) - min(x1, x2));
        y = (max(y1, y2) - min(y1, y2));
        p = (max(p1, p2) - min(p1, p2));
        int exchange = (l+m+x+y+p)/4;
        cout << exchange <<endl;

    }
    else
    {
        cout << "-1" << endl;
    }
}
