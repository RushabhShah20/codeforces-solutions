// Problem: TV Subscriptions (Hard Version)
// Link to the problem: https://codeforces.com/contest/1225/problem/B2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, m;
    cin >> n >> k >> m;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    map<ll, ll> p;
    ll z = 0;
    for (ll i = 0; i < m; i++)
    {
        if (p[a[i]] == 0)
        {
            z++;
        }
        p[a[i]]++;
    }
    ll ans = z;
    for (ll i = m; i < n; i++)
    {
        const ll x = a[i - m];
        p[x]--;
        if (p[x] == 0)
        {
            z--;
        }
        const ll y = a[i];
        if (p[y] == 0)
        {
            z++;
        }
        p[y]++;
        ans = min(ans, z);
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