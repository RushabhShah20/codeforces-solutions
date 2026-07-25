// Problem: K-Periodic Array
// Link to the problem: https://codeforces.com/contest/371/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        ll x = 0, y = 0;
        for (ll j = i; j < n; j += k)
        {
            x += a[j] == 1 ? 1 : 0;
            y += a[j] == 2 ? 1 : 0;
        }
        ans += min(x, y);
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
    solve();
    return 0;
}