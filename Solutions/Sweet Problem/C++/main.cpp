// Problem: Sweet Problem
// Link to the problem: https://codeforces.com/contest/1263/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[2] - a[1] > a[0])
    {
        a[1] += a[0];
    }
    else
    {
        const ll x = a[2] - a[1];
        a[1] += x;
        a[0] -= x;
        a[1] += (a[0] + 1) / 2;
        a[2] += a[0] / 2;
    }
    const ll ans = min(a[1], a[2]);
    cout << ans << endl;
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