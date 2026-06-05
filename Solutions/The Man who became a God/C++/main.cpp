// Problem: The Man who became a God
// Link to the problem: https://codeforces.com/contest/1847/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n - 1);
    for (ll i = 1; i < n; i++)
    {
        b[i - 1] = abs(a[i] - a[i - 1]);
    }
    sort(b.begin(), b.end());
    ll ans = 0;
    for (ll i = 0; i < n - k; i++)
    {
        ans += b[i];
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