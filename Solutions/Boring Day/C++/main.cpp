// Problem: Boring Day
// Link to the problem: https://codeforces.com/contest/1982/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0, x = 0, i = 0;
    for (ll j = 0; j < n; j++)
    {
        x += a[j];
        while (i <= j && x > r)
        {
            x -= a[i];
            i++;
        }
        if (i <= j && x >= l && x <= r)
        {
            ans++;
            x = 0;
            i = j + 1;
        }
    }
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