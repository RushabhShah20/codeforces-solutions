// Problem: Stone Game
// Link to the problem: https://codeforces.com/contest/1538/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] > a[x])
        {
            x = i;
        }
        else if (a[i] < a[y])
        {
            y = i;
        }
    }
    const ll p = max(x, y) + 1, q = n - min(x, y), r = min(x, y) + 1 + (n - max(x, y)), ans = min({p, q, r});
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