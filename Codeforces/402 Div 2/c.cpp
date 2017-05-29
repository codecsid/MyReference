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
    int n, k;
    cin >> n >> k;
    int a[n], b[n];
    for(int i = 0;i < n;i++)
        scanf("%d", &a[i]);

    for(int i = 0;i < n;i++)
        scanf("%d", &b[i]);

    int d[n];
    for(int i = 0;i < n;i++){
        d[i] = a[i] - b[i];
    }
    vector<pair<int, int>> v;
    for(int i = 0;i < n;i++)
        v.push_back(make_pair(i, d[i]));

    struct ordering {
        bool operator ()(pair<int, int> const& a, pair<int, int> const& b) {
            return a.second < b.second;
        }
    };
    sort(v.begin(), v.end(), ordering());
    int price1 = 0, price2 = 0;
    int i = 0;
    while(i < k)
        price1 +=  a[v[i++].first];
    while(i < n)
        price2 += b[v[i++].first];
    int min_price = price1 + price2;
    int j = k;
    int cur_price;
    for(int i = 0;i < n-k;i++)
    {
         cur_price = min_price - b[v[j].first] + a[v[j].first];
         j++;
         if(cur_price < min_price)
            min_price = cur_price;
    }
    cout << min_price << endl;
}
