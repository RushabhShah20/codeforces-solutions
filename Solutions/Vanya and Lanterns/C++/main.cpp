// Problem: Vanya and Lanterns
// Link to the problem: https://codeforces.com/contest/492/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l;
    cin >> n >> l;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = a[0];
    for (ll i = 1; i < n; i++)
    {
        x = max(x, a[i] - a[i - 1]);
    }
    x = max(x, l - a[n - 1]);
    const long double ans = max({(long double)x / 2, (long double)a[0], (long double)(l - a[n - 1])});
    cout << fixed << setprecision(10) << ans << endl;
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