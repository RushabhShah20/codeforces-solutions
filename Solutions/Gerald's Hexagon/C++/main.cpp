// Problem: Gerald's Hexagon
// Link to the problem: https://codeforces.com/contest/559/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(6);
    for (ll i = 0; i < 6; i++)
    {
        cin >> a[i];
    }
    const ll x = a[0] + a[1] + a[2];
    const ll ans = x * x - a[0] * a[0] - a[2] * a[2] - a[4] * a[4];
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