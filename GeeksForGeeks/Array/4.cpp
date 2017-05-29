// Majority Element

/* Platform - Codeforces
* Username - rootn
* ProblemName or Id -
*/

#include <bits/stdc++.h>
using namespace std;

#define INF 0x3f3f3f3f
typedef long long ll;
typedef vector<int> vi;

void method1(vi &test)
{
    int s = test.size();
    int maj_index = 0;
    int count = 1, max_count = 0;
    for(int i = 0;i < s;i++)
    {
        count = 1;
        for(int j = 1;j < s;j++)
        {
            if(test[i] == test[j])
                count++;
        }
        if(count > max_count)
            maj_index = i;
    }
    if(max_count > s/2)
        cout << "Majority element exists." << endl;
    else
        cout << "Majority element doesn't exist." << endl;
}

void method2(vi &test)
{
    
}

int main(void)
{
    vi test = {5, 9, 3, 5, 5, 5, 2, 1, 5};
    method1(test);
    method2(test);
    method3(test);
    method4(test);
}
