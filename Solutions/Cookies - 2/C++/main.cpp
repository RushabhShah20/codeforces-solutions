// Problem: Cookies
// Link to the problem: https://codeforces.com/contest/70/problem/A
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
    constexpr ll m = 1000003;
    const ll ans = power(3, n - 1, m);
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