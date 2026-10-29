// Problem: The Strict Teacher (Hard Version)
// Link to the problem: https://codeforces.com/contest/2005/problem/B2
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        const ll j = upper_bound(a.begin(), a.end(), x) - a.begin();
        const ll ans = j == 0 ? (a[0] - 1) : (j == m ? (n - a[m - 1]) : ((a[j] - a[j - 1]) >> 1));
        cout << ans << endl;
    }
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