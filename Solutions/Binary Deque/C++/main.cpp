// Problem: Binary Deque
// Link to the problem: https://codeforces.com/contest/1692/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    if (x < k)
    {
        cout << -1 << endl;
        return;
    }
    ll z = 0, y = 0, i = 0;
    for (ll j = 0; j < n; j++)
    {
        y += a[j];
        while (y > k)
        {
            y -= a[i];
            i++;
        }
        if (y == k)
        {
            z = max(z, j - i + 1);
        }
    }
    const ll ans = n - z;
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