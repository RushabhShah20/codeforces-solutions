// Problem: Contrast Value
// Link to the problem: https://codeforces.com/contest/1832/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (a.empty() || a.back() != x)
        {
            a.push_back(x);
        }
    }
    const ll m = a.size();
    if (m <= 1)
    {
        cout << 1 << endl;
        return;
    }
    ll ans = 2;
    for (ll i = 1; i < m - 1; i++)
    {
        ans += (a[i - 1] > a[i] && a[i + 1] > a[i]) || (a[i - 1] < a[i] && a[i + 1] < a[i]);
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