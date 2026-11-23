// Problem: Turtle Fingers: Count the Values of k
// Link to the problem: https://codeforces.com/contest/1933/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, k;
    cin >> a >> b >> k;
    set<ll> s;
    for (ll i = 1; i <= k; i *= a)
    {
        for (ll j = 1; i * j <= k; j *= b)
        {
            const ll x = i * j;
            if (k % x == 0)
            {
                s.insert(k / x);
            }
        }
    }
    const ll ans = s.size();
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