// Problem: Array Balancing
// Link to the problem: https://codeforces.com/contest/1661/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        const ll x = abs(a[i] - a[i - 1]) + abs(b[i] - b[i - 1]);
        const ll y = abs(b[i] - a[i - 1]) + abs(a[i] - b[i - 1]);
        if (y < x)
        {
            swap(a[i], b[i]);
            ans += y;
        }
        else
        {
            ans += x;
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