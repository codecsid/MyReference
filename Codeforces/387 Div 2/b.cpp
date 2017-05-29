/* Platform - Codeforces 387 Div 2
 * Username - rootn
 * ProblemName or Id -
 * Tag -
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, a, g, c, t, q;
    cin >> n;
    char s[n+1];
    scanf("%s", &s[0]);
    a = g = t = c = q = 0;
    for(int i =0;i < n;++i)
    {
        switch(s[i]){
            case 'A': a++;break;
            case 'G': g++;break;
            case 'C': c++;break;
            case 'T': t++;break;
            case '?': q++;break;
        }
    }

    bool allequal = false;
    if(a == g && a == c && a == t) allequal = true;
    int nucl[4];
    nucl[0] = a;
    nucl[1] = g;
    nucl[2] = c;
    nucl[3] = t;
    while(q != 0)
    {
        if((nucl[0] == nucl[1] && nucl[1] == nucl[2] && nucl[1] == nucl[3]))
        {
            if(q % 4 != 0)
            {
                cout << "===" << endl;
                return 0;
            }
            else
            {
                q = q/4;
                for(int i = 0;i < 4;i++)
                {
                    nucl[i] += q;
                }
                q = 0;
                allequal = true;
            }
        }
        else
        {
            int min = nucl[0];
            int min_index = 0;

            for(int i = 1;i < 4;i++)
            {
                if(min > nucl[i])
                {
                    min = nucl[i];
                    min_index = i;
                }
            }
            nucl[min_index]++;q--;
            if(q == 0 && (nucl[0] == nucl[1] && nucl[1] == nucl[2] && nucl[1] == nucl[3]))
                allequal = true;
        }
    }
    if(allequal)
    {
        a = nucl[0] - a;
        g = nucl[1] - g;
        c = nucl[2] - c;
        t = nucl[3] - t;
        for(int i = 0;i < n;i++)
        {
            if(s[i] == '?')
            {
                if(a != 0)
                    s[i] = 'A', a--;
                else if(g != 0)
                    s[i] = 'G', g--;
                else if (c != 0)
                    s[i] = 'C', c--;
                else if(t != 0)
                    s[i] = 'T', t--;
            }
        }
        printf("%s\n", s);
    }
    else
        cout << "===" << endl;
}
