// Problem: Supermarket
// Link to the problem: https://codeforces.com/contest/919/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    long double x = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        long double a, b;
        cin >> a >> b;
        x = min(x, a / b);
    }
    const long double ans = m * x;
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