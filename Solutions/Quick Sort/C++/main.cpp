// Problem: Quick Sort
// Link to the problem: https://codeforces.com/contest/1768/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll y = 1;
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        if (x == y)
        {
            y++;
        }
    }
    const ll ans = (n - y + k) / k;
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