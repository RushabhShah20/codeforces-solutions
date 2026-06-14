// Problem: Beru-taxi
// Link to the problem: https://codeforces.com/contest/706/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll n;
    cin >> n;
    long double ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        ll c, d, v;
        cin >> c >> d >> v;
        const ll x = abs(a - c), y = abs(b - d);
        const long double z = sqrtl(x * x + y * y);
        ans = min(ans, z / (long double)v);
    }
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