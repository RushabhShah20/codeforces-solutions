// Problem: Gleb And Pizza
// Link to the problem: https://codeforces.com/contest/842/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x, y, k;
        cin >> x >> y >> k;
        const long double z = sqrtl(x * x + y * y);
        ans += z - k >= a - b && z + k <= a;
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