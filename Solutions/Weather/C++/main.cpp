// Problem: Weather
// Link to the problem: https://codeforces.com/contest/234/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    vector<ll> b(n + 1), c(n + 2);
    for (ll i = 1; i <= n; i++)
    {
        b[i] = b[i - 1] + (a[i] >= 0 ? 1 : 0);
    }
    for (ll i = n; i >= 1; i--)
    {
        c[i] = c[i + 1] + (a[i] <= 0 ? 1 : 0);
    }
    ll ans = n;
    for (ll i = 1; i < n; i++)
    {
        ans = min(ans, b[i] + c[i + 1]);
    }
    cout << ans << endl;
}

int main()
{
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}