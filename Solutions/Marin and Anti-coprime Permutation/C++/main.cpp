// Problem: Marin and Anti-coprime Permutation
// Link to the problem: https://codeforces.com/contest/1658/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        cout << 0 << endl;
    }
    else
    {
        ll ans = 1;
        for (ll i = 1; i <= n / 2; i++)
        {
            constexpr ll m = 998244353;
            ans = ans * i * i % m;
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}