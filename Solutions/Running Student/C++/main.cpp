// Problem: Running Student
// Link to the problem: https://codeforces.com/contest/9/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    ll x, y;
    cin >> x >> y;
    long double mnt = 1e18, mnd = 1e18;
    ll ans = -1;
    for (ll i = 1; i < n; i++)
    {
        const long double d = sqrtl((long double)(x - v[i]) * (x - v[i]) + (long double)y * y), t = (long double)v[i] / a + d / b;
        if (t < mnt - 1e-10)
        {
            mnt = t;
            mnd = d;
            ans = i + 1;
        }
        else if (abs(t - mnt) <= 1e-10)
        {
            if (d < mnd)
            {
                mnd = d;
                ans = i + 1;
            }
        }
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