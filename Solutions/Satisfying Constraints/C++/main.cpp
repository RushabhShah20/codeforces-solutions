// Problem: Satisfying Constraints
// Link to the problem: https://codeforces.com/contest/1920/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll l = 1, r = 1000000000;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll m, x;
        cin >> m >> x;
        if (m == 1)
        {
            l = max(l, x);
        }
        else if (m == 2)
        {
            r = min(r, x);
        }
        else
        {
            a.push_back(x);
        }
    }
    ll x = r - l + 1;
    for (const ll i : a)
    {
        if (i >= l && i <= r)
        {
            x--;
        }
    }
    const ll ans = max(0LL, x);
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