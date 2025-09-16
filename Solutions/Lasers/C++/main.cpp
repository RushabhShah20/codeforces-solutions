// Problem: Lasers
// Link to the problem: https://codeforces.com/contest/2148/problem/B
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
        ll n, m, x, y;
        cin >> n >> m >> x >> y;
        vector<ll> a(n), b(m);
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (ll i = 0; i < m; i++)
        {
            cin >> b[i];
        }
        cout << n + m << endl;
    }
    return 0;
}
