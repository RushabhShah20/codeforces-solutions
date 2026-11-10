// Problem: Binomial Coefficients, Kind Of
// Link to the problem: https://codeforces.com/contest/2025/problem/B
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
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (ll i = 0; i < n; i++)
    {
        constexpr ll k = 1000000007;
        const ll ans = a[i] == b[i] ? 1 : power(2, b[i], k);
        cout << ans << endl;
    }
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