// Problem: Intense Heat
// Link to the problem: https://codeforces.com/contest/1003/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        cin >> a[i];
        a[i] += a[i - 1];
    }
    long double ans = 0;
    for (ll j = k; j <= n; j++)
    {
        for (ll i = j; i <= n; i++)
        {
            long double x = (a[i] - a[i - j]) / (long double)j;
            ans = max(ans, x);
        }
    }
    cout << fixed << setprecision(15) << ans << endl;
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