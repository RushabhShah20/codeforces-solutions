// Problem: Benches
// Link to the problem: https://codeforces.com/contest/1042/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll y = 0, mx = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        mx = max(mx, x);
        y += x;
    }
    const ll a = max(mx, (y + m + n - 1) / n), b = mx + m;
    cout << a << " " << b << endl;
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