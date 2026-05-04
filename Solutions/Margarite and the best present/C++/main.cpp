// Problem: Margarite and the best present
// Link to the problem: https://codeforces.com/contest/1080/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll sum(const ll n)
{
    const ll x = n & 1 ? (n - 1) / 2 : n / 2, y = n - x, ans = (x * (x + 1)) - (y * y);
    return ans;
}

void solve()
{
    ll l, r;
    cin >> l >> r;
    const ll ans = l == 1 ? sum(r) : sum(r) - sum(l - 1);
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