/* Platform - Codeforces 385 Div 2
 * Username - rootn
 * ProblemName or Id - A
 * Tag -
 */

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    char s[51];
    scanf("%s", s);
    int len = strlen(s), diff = 0;
    for(int i = 0;i < len;i++)
    {
        char mod[len+1];
        int j, k = 0;
        for(j = i+1;j < len;j++)
            mod[k++] = s[j];

        for(j = 0;j < i+1;j++)
            mod[k++] = s[j];

        mod[k] = '\0';

        if(strcmp(s, mod))
            diff++;
        else
            break;
    }
    cout << diff+1 << endl;
}
