/* Platform - UVa
* Username - shraddheshh
* ProblemName or Id - 12356
*/

#include <bits/stdc++.h>
using namespace std;

typedef vector<int> vi;

int main(void)
{
    int s, b;
    cin >> s >> b;
    while(s && b)
    {
        vector<int> start, last;
        start.push_back(1);
        last.push_back(s);
        while(b--)
        {
            int p, q; scanf("%d %d", &p, &q);
            auto x = lower_bound(last.begin(), last.end(), p);
            int index = x - last.begin();
            int first = start[index];
            int second = last[index];
            if(first == second)
            {
                last.erase(x);
                x = start.begin() + index;
                start.erase(x);
            }
            else
            {
                vector<int>::iterator start_next, last_next;
                x++;
                last_next = x--;
                last.erase(x);
                x = start.begin() + index;
                start_next = ++x;
                x--;
                start.erase(x);
            }

        }

        cout << "-" << endl;
        cin >> s >> b;
    }
}

//Solution using set , taking time
// int main(void)
// {
//     int s, b;
//     cin >> s >> b;
//     while(s && b)
//     {
//         set<int> myset;
//         for(int i = 0;i < s;i++)
//             myset.insert(i+1);
//         while(b--)
//         {
//             int p, q;
//             set<int>::iterator x, y, temp;
//             scanf("%d %d", &p, &q);
//             x = myset.lower_bound(p);
//             y = myset.upper_bound(q);
//             temp = x;
//             if(temp != myset.begin())
//             {
//                 temp--;cout << *temp << " ";
//             }
//             else
//                 cout << "* ";
//             if(y != myset.end())
//                 cout << *y << endl;
//             else
//                 cout << "*" << endl;
//             myset.erase(x, y);
//
//         }
//         cout << "-" << endl;
//         scanf("%d %d", &s, &b);
//     }
// }


/*Solutioon Using LIst, takes a lot of time.
forward_list<int> l;
for(int i = s-1;i >= 0;i--)
    l.push_front(i+1);
while(b--)
{
    int p, q;
    cin >> p >> q;
    forward_list<int>::iterator i = l.begin();
    int x = *i;
    if(x == p)cout << "* ";
    else
    {
        int prev = *i;
        while(*i < p){
            prev = *i;
            i++;
        }
        cout << prev << " ";
    }
    x = *i;
    while(x != q)
    {
        i++;
        x = *i;
    }
    if(x == q){
        auto pr = i;
        pr++;
        if(pr == l.end())
            {cout << "*" << endl;}
        else
            {i++;cout << *i << endl;}
    }
    for(int i = p;i <= q;i++)
        l.remove(i);
}
cout << "-" << endl;
cin >> s >> b;
*/
