// Problem: Line Breaks
// Link to the problem: https://codeforces.com/contest/2050/problem/A
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
        ll n, m;
        cin >> n >> m;
        ll sum = 0, ans = 0;
        ;
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            sum = sum + s.length();
            if (sum <= m)
            {
                ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}