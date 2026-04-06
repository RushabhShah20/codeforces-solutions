// Problem: Stripe
// Link to the problem: https://codeforces.com/contest/18/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    ll y = a[0], ans = 0;
    if (y == x - y)
    {
        ans++;
    }
    for (ll i = 1; i < n - 1; i++)
    {
        y += a[i];
        if (y == x - y)
        {
            ans++;
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
    solve();
    return 0;
}