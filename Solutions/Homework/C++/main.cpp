// Problem: Homework
// Link to the problem: https://codeforces.com/contest/2132/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        string a, b, c;
        cin >> a;
        ll m;
        cin >> m;
        cin >> b;
        cin >> c;
        for (int i = 0; i < m; i++)
        {
            if (c[i] == 'D')
            {
                a.push_back(b[i]);
            }
            else
            {
                a.insert(0, 1, b[i]);
            }
        }
        cout << a << endl;
    }
    return 0;
}
