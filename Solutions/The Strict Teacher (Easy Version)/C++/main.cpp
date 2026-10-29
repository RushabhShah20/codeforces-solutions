// Problem: The Strict Teacher (Easy Version)
// Link to the problem: https://codeforces.com/contest/2005/problem/B1
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
        const ll ans = x < a[0] ? (a[0] - 1) : (x > a[1] ? (n - a[1]) : ((a[1] - a[0]) >> 1));
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