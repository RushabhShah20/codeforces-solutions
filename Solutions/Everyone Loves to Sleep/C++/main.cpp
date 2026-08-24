// Problem: Everyone Loves to Sleep
// Link to the problem: https://codeforces.com/contest/1714/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, h, m;
    cin >> n >> h >> m;
    const ll x = h * 60 + m;
    ll ans = 1440;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        const ll y = a * 60 + b, z = x > y ? 1440 + y - x : y - x;
        ans = min(ans, z);
    }
    cout << ans / 60 << " " << ans % 60 << endl;
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