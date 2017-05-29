//Given an array A[] and a number x, check for pair in A[] with sum as x.
// However O(n) auxiliary space is used if Merge Sort or Heap Sort is used.
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
    vi a = {1, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int x = 9;

    // Bruteforce O(n^2)
    cout << "Method 1 : Bruteforce" << endl;
    for(int i = 0;i < 10;i++)
    {
        for(int j = i+1;j < 11;j++)
        {
            if(a[i] + a[j] == x)
                cout << i+1 << ", " << j+1 << endl;
        }
    }

    // O(n) method.
    cout << endl << "Method 2: Bidirectional Search" << endl;

    int i = 0, j = 10;
    while(i<j)
    {
        if(a[i] + a[j] < x)
            i++;
        if(a[i] + a[j] > x)
            j--;
        if(a[i] + a[j] == x)
        {
            cout << i+1 << ", " << j+1 << endl;
            j--;
        }
    }

    //Binary Search method (returns all the pairs whether they are multiple no. of times)
    cout << endl << "Method 3: Binary Search" << endl;
    vi::iterator m, n;
    int pairs = 0;
    for(m = a.begin();m != a.end();m++)
    {
        int y = *m;
        n = m;
        n++;
        int s = x - y;
        if(binary_search(n, a.end(), s))
            pairs++;
        vi::iterator f = lower_bound(n, a.end(), s);
        if(*f == s)
            cout << s << ", " << y << endl;

        // cout << pairs << endl;
    }
}
