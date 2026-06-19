// Problem: Lucky Numbers
// Link to the problem: https://codeforces.com/contest/1808/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    unordered_map<ll, ll> m;
    ll z = 0;
    for (ll i = max(l, r - 100); i <= r; i++)
    {
        ll x = i;
        ll mn = LLONG_MAX, mx = LLONG_MIN;
        while (x > 0)
        {
            const ll y = x % 10;
            mn = min(mn, y);
            mx = max(mx, y);
            x /= 10;
        }
        m[mx - mn] = i;
        z = max(z, mx - mn);
    }
    cout << m[z] << endl;
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