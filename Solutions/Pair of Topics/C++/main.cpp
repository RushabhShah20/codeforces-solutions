// Problem: Pair of Topics
// Link to the problem: https://codeforces.com/contest/1324/problem/D
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
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        c[i] = a[i] - b[i];
    }
    sort(c.begin(), c.end());
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll j = upper_bound(c.begin() + i + 1, c.end(), -c[i]) - c.begin();
        ans += n - j;
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