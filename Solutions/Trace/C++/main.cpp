// Problem: Trace
// Link to the problem: https://codeforces.com/contest/157/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            x -= a[i] * a[i];
        }
        else
        {
            x += a[i] * a[i];
        }
    }
    const long double ans = acosl(-1) * abs(x);
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