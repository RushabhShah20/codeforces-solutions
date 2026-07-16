// Problem: Valuable Resources
// Link to the problem: https://codeforces.com/contest/485/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mnx = LLONG_MAX, mny = LLONG_MAX, mxx = LLONG_MIN, mxy = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        mnx = min(mnx, x);
        mny = min(mny, y);
        mxx = max(mxx, x);
        mxy = max(mxy, y);
    }
    const ll z = max(mxx - mnx, mxy - mny), ans = z * z;
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