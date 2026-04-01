// Problem: Special Numbers
// Link to the problem: https://codeforces.com/contest/1594/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll power(ll b, ll e, const ll m)
{
    ll ans = 1;
    b %= m;
    while (e > 0)
    {
        if (e & 1)
        {
            ans = ans * b % m;
        }
        b = b * b % m;
        e >>= 1;
    }
    return ans;
}

void solve()
{
    ll n, k;
    cin >> n >> k;
    const bitset<32> a(k);
    ll ans = 0;
    constexpr ll m = 1000000007;
    for (ll i = 0; i < 32; i++)
    {
        if (a[i])
        {
            ans = ans + power(n, i, m) % m;
        }
    }
    ans %= m;
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