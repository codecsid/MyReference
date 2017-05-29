#include <bits/stdc++.h>
using namespace std;

bool mycomp(pair<pair<int, int>, int> a, pair<pair<int, int>, int> b)
{
    return get<1>(a) < get<1>(b);
}

int main(void)
{
    vector<pair<pair<int, int>, int>> v;
    for(int i = 0;i < 5;i++)
    {
        int a, b, c;
        cin >> a >> b >> c;
        v.push_back(make_pair(make_pair(a, b), c));
    }
    for(int i= 0;i < 5;i++)
        cout << get<0>(get<0>(v[i])) << endl;

    sort(v.begin(), v.end(), mycomp);
    for(int i= 0;i < 5;i++)
        cout << get<1>(v[i]) << endl;
}
