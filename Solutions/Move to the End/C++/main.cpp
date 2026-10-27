// Problem: Move to the End
// Link to the problem: https://codeforces.com/contest/2104/problem/B
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
    vector<ll> b(n);
    b[0] = a[0];
    for (ll i = 1; i < n; i++)
    {
        b[i] = max(b[i - 1], a[i]);
    }
    vector<ll> c(n);
    c[n - 1] = a[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        c[i] = c[i + 1] + a[i];
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        const ll ans = b[i] + (i < n - 1 ? c[i + 1] : 0);
        cout << ans << " ";
    }
    cout << endl;
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