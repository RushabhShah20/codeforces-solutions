// Problem: Ten Words of Wisdom
// Link to the problem: https://codeforces.com/contest/1850/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<ll> a(n), b(n);
    ll q = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i] >> b[i];
        if (a[i] <= 10)
        {
            q = max(q, b[i]);
        }
    }
    ll p = 0;
    for (ll i = 0; i < n; i++)
    {
        if (q == b[i])
        {
            p = max(p, a[i]);
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (p == a[i] && q == b[i])
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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