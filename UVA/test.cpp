#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    vector<int> v(5);
    v[0] = 1;
    v[1] = 2;
    v[2] = 3;
    v[3] = 4;
    v[4] = 5;
    vector<int>::iterator x = lower_bound(v.begin(), v.end(), 4);
    v.erase(&v[3]);
    cout<< v.size() << endl;
}
