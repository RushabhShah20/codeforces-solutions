// Problem: Divan and a New Project
// Link to the problem: https://codeforces.com/contest/1614/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n + 1, {0, 0});
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[i] = {x, i};
    }
    sort(a.begin() + 1, a.end(), greater<>());
    vector<ll> b(n + 1);
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        const ll x = (i + 1) >> 1;
        b[a[i].second] = x * (i & 1 ? 1 : -1);
        ans += (x << 1) * a[i].first;
    }
    cout << ans << endl;
    for (ll i = 0; i <= n; i++)
    {
        cout << b[i] << " ";
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