#include <bits/stdc++.h>
using namespace std;

struct bidder
{
    int id;
    int bid;
    bool present;
};

int main(void)
{
    int n, a, b; cin >> n;
    vector<bidder> v;
    for(int i = 0;i < n;i++)
    {
        cin >> a >> b;
        bidder x;
        x.id = a;
        x.bid = b;
        x.present = true;
        v.push_back(x);
    }
    int q;cin >> q;
    int k;
    for(int i = 0;i < q;i++)
    {
        cin >> k;
        int temp;
        while(k--)
        {
            cin >> temp;
            for(int s = 0;s < n;s++)
            {
                if(v[s].id == temp)
                    v[s].present = false;
            }
        }
        int previd = 0, p = 0, maxbid = 0, maxid = 0;
        while(p < n)
        {
            if(v[p].present == false || previd == v[p].id){
                p++; continue;}
            if(v[p].bid > maxbid)
                maxbid = v[p].bid, maxid = v[p].id;
            previd = v[p].id;
            p++;
        }
        cout << maxid << " " << maxbid << endl;

        for(p = 0; p < n;p++)
            if(!v[p].present)v[p].present = true;
    }

}
