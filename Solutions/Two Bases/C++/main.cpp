// Problem: Two Bases
// Link to the problem: https://codeforces.com/contest/602/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, p;
    cin >> n >> p;
    vector<ll> a(n);
    for (ll i = n - 1; i >= 0; i--)
    {
        cin >> a[i];
    }
    ll m, q;
    cin >> m >> q;
    vector<ll> b(m);
    for (ll i = m - 1; i >= 0; i--)
    {
        cin >> b[i];
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        x += powl(p, i) * a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        y += powl(q, i) * b[i];
    }
    const char ans = x > y ? '>' : (x < y ? '<' : '=');
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}