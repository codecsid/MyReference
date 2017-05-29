/* Platform - Codeforces
* Username - rootn
* ProblemName or Id - B
*/

#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int m[4][4];
    int emp = 0;
    char temp;
    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 4;j++)
        {
            scanf("%c", &temp);
            switch(temp)
            {
                case 'x': m[i][j] = 1;break;
                case 'o': m[i][j] = 0;break;
                case '.': m[i][j] = 2;emp++;break;
            }
        }
    }
    if(emp == 16)
    {
        printf("NO\n");
        return 0;
    }

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            if(m[i][j] == 1 && m[i][j+1] == 1)
            {
                if(j == 0)
                {
                    if(m[i][j+2] == 2)
                    {
                        printf("YES\n");return 0;
                    }
                }
                else if(j == 2)
                {
                    if(m[i][j+2] == 2 || m[i][j-1] == 2)
                    {
                        printf("YES\n");return 0;
                    }
                }
                else
                {
                    if(m[i][j-1] == 2)
                    {
                        printf("YES\n");return 0;
                    }
                }
            }
            if(j == 0 || j == 1)
                if(m[i][j] == 1 && m[i][j+2] == 1 && m[i][j+1] == 2)
                    {printf("YES\n");return 0;}

        }
    }

    for(int i = 0;i < 4;i++)
    {
        for(int j = 0;j < 3;j++)
        {
            if(m[j][i] == 1 && m[j+1][i] == 1)
            {
                if(i == 0)
                {
                    if(m[j+2][i] == 2)
                    {
                        printf("YES\n");return 0;
                    }
                }
                else if(j == 1)
                {
                    if(m[j+2][i] == 2 || m[j-1][i] == 2)
                    {
                        printf("YES\n");return 0;
                    }
                }
                else
                {
                    if(m[j-1][i] == 2)
                    {
                        printf("YES\n");return 0;
                    }
                }
            }
            if(j == 0 || j == 1)
                if(m[j][i] == 1 && m[j+2][i] == 1 && m[j+1][i] == 2)
                    {printf("YES\n");return 0;}

        }
    }
    int i = 0, j = 0;
    while(i < 3)
    {
        if(m[i][j] == 1 && m[i+1][j+1] == 1)
        {
            if(j == 0)
            {
                if(m[i+2][j+2] == 2)
                {
                    printf("YES\n");return 0;
                }
            }
            else if(j == 1)
            {
                if(m[i+2][j+2] == 2 || m[i-1][j-1] == 2)
                {
                    printf("YES\n");return 0;
                }
            }
            else
            {
                if(m[i-1][j-1] == 2)
                {
                    printf("YES\n");return 0;
                }
            }
        }
        if(j == 0 || j == 1)
            if(m[j][i] == 1 && m[j+2][i+2] == 1 && m[j+1][i+1] == 2)
                {printf("YES\n");return 0;}
        i++;
        j++;
    }
    i = 3;j = 0;
    while(i > 0)
    {
        if(m[i][j] == 1 && m[i-1][j+1] == 1)
        {
            if(j == 0)
            {
                if(m[1][2] == 2)
                {
                    printf("YES\n");return 0;
                }
            }
            else if(j == 1)
            {
                if(m[3][0] == 2 || m[0][4] == 2)
                {
                    printf("YES\n");return 0;
                }
            }
            else
            {
                if(m[2][1] == 2)
                {
                    printf("YES\n");return 0;
                }
            }
        }
        if(j == 0 || j == 1)
            if(m[i][j] == 1 && m[i-2][j+2] == 1 && m[i-1][j+1] == 2)
                {printf("YES\n");return 0;}
        i--;
        j++;
    }
    printf("NO\n");
}
