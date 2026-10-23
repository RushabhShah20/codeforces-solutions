// Problem: Pashmak and Flowers
// Link to the problem: https://codeforces.com/contest/459/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        mx = max(mx, x);
        mn = min(mn, x);
    }
    const ll y = mx - mn, z = mn == mx ? (m[mx] * (m[mx] - 1)) >> 1 : m[mx] * m[mn];
    cout << y << " " << z << endl;
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