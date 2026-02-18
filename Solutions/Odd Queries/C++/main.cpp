// Problem: Odd Queries
// Link to the problem: https://codeforces.com/contest/1807/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n), p(n + 1), l(q), r(q), k(q);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < q; i++)
    {
        cin >> l[i] >> r[i] >> k[i];
    }
    p[0] = 0;
    for (ll i = 0; i < n; i++)
    {
        p[i + 1] = p[i] + a[i];
    }
    for (ll i = 0; i < q; i++)
    {
        if ((p[n] - p[r[i]] + p[l[i] - 1] + (r[i] - l[i] + 1) * k[i]) % 2 != 0)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}