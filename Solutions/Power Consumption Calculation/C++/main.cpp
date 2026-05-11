// Problem: Power Consumption Calculation
// Link to the problem: https://codeforces.com/contest/10/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, p1, p2, p3, t1, t2;
    cin >> n >> p1 >> p2 >> p3 >> t1 >> t2;
    vector<ll> l(n), r(n);
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> l[i] >> r[i];
        ans += (r[i] - l[i]) * p1;
    }
    for (ll i = 1; i < n; i++)
    {
        ll x = l[i] - r[i - 1];
        const ll a = min(t1, x);
        x -= a;
        const ll b = min(t2, x);
        x -= b;
        const ll c = x;
        ans += a * p1 + b * p2 + c * p3;
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