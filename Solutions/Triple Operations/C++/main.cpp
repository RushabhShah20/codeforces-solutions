// Problem: Triple Operations
// Link to the problem: https://codeforces.com/contest/1999/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve(const vector<ll> &a)
{
    ll l, r;
    cin >> l >> r;
    const ll ans = a[r] - 2 * a[l - 1] + a[l];
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    vector<ll> a(200007);
    const ll m = a.size();
    for (ll i = 1; i < m; i++)
    {
        a[i] = 1 + a[i / 3];
    }
    for (ll i = 1; i < m; i++)
    {
        a[i] += a[i - 1];
    }
    ll t;
    cin >> t;
    while (t--)
    {
        solve(a);
    }
    return 0;
}