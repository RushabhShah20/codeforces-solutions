// Problem: Download More RAM
// Link to the problem: https://codeforces.com/contest/1629/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    vector<pair<ll, ll>> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        ll b;
        cin >> b;
        v[i] = {a[i], b};
    }
    sort(v.begin(), v.end());
    ll ans = k;
    for (ll i = 0; i < n; i++)
    {
        if (v[i].first <= ans)
        {
            ans += v[i].second;
        }
        else
        {
            break;
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