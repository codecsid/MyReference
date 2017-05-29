/* Platform - UVa
* Username - shraddheshh
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
    while(n--)
    {
        int k; cin >> k;
        char c;
        int d;
        map<char, int> mymap;
        for(int i = 0;i < k;i++)
        {
            cin >> c >> d;
            mymap.insert(make_pair(c, d));
        }
        int m; cin >> m;
        float cost = 0;m++;
        while(m--)
        {
            char* line = (char*) malloc(10001 * sizeof(char));
            size_t n = sizeof(char) * 10001;
            int x = getline(&line, &n, stdin);
            for(int i = 0;i < x;i++)
            {
                auto search = mymap.find(line[i]);
                if(search != mymap.end())
                    cost += search->second;
            }
            free(line);
        }
        cost = cost/100;
        printf("%.2f$\n", cost);
    }
}
