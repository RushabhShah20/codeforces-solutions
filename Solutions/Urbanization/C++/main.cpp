// Problem: Urbanization
// Link to the problem: https://codeforces.com/contest/735/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, n1, n2;
    cin >> n >> n1 >> n2;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end(), greater<>());
    const ll p = min(n1, n2), q = max(n1, n2);
    long double x = 0, y = 0;
    for (ll i = 0; i < p; i++)
    {
        x += a[i];
    }
    for (ll i = p; i < p + q; i++)
    {
        y += a[i];
    }
    const long double ans = x / p + y / q;
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