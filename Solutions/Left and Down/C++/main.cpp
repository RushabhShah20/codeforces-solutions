// Problem: Left and Down
// Link to the problem: https://codeforces.com/contest/2125/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    const ll c = __gcd(a, b);
    a /= c;
    b /= c;
    const ll ans = a <= k && b <= k ? 1 : 2;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}