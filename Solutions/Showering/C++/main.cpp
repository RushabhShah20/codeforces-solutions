// Problem: Showering
// Link to the problem: https://codeforces.com/contest/1999/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, s, m;
    cin >> n >> s >> m;
    vector<ll> l(n), r(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
    }
    ll a = l[0];
    for (ll i = 0; i < n - 1; i++)
    {
        a = max(a, l[i + 1] - r[i]);
    }
    a = max(a, m - r[n - 1]);
    if (a >= s)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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