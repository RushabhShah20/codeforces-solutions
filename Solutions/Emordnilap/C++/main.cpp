// Problem: Emordnilap
// Link to the problem: https://codeforces.com/contest/1777/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    const ll m = 1000000007;
    const ll k = n * (n - 1);
    ll ans = k % m;
    for (ll i = 2; i <= n; i++)
    {
        ans = ans * i % m;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}