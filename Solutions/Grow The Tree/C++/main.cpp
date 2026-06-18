// Problem: Grow The Tree
// Link to the problem: https://codeforces.com/contest/1248/problem/B
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
    sort(a.begin(), a.end(), greater<>());
    ll x = 0, y = 0;
    const ll k = n & 1 ? n / 2 : (n - 1) / 2;
    for (ll i = 0; i < n; i++)
    {
        if (i <= k)
        {
            x += a[i];
        }
        else
        {
            y += a[i];
        }
    }
    const ll ans = x * x + y * y;
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