// Problem: Andrew and Stones
// Link to the problem: https://codeforces.com/contest/1637/problem/C
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
    bool x = true;
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i] > 1)
        {
            x = false;
            break;
        }
    }
    if (x || (n == 3 && a[1] & 1))
    {
        cout << -1 << endl;
        return;
    }
    ll ans = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        ans += (a[i] + 1) >> 1;
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