// Problem: Bobritto Bandito
// Link to the problem: https://codeforces.com/contest/2094/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, l, r;
    cin >> n >> m >> l >> r;
    const ll x = min(m, r);
    m -= x;
    const ll y = -m;
    cout << y << " " << x << endl;
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