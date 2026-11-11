// Problem: Basketball Exercise
// Link to the problem: https://codeforces.com/contest/1195/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1), b(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    vector<ll> c(n + 1), d(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        c[i] = max(c[i - 1], a[i] + d[i - 1]);
        d[i] = max(d[i - 1], b[i] + c[i - 1]);
    }
    const ll ans = max(c[n], d[n]);
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