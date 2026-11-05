// Problem: Rhythmic String
// Link to the problem: https://codeforces.com/contest/2283/problem/B
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
    ll y = 1;
    for (ll i = 0; i < n; i++)
    {
        ll x = 0;
        for (ll j = 0; j < n; j++)
        {
            x += a[j] % a[i] == 0;
        }
        y = max(y, x);
    }
    const ll ans = n - y;
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