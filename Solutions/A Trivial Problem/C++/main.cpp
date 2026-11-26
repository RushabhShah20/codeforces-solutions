// Problem: A Trivial Problem
// Link to the problem: https://codeforces.com/contest/633/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll count(const ll n)
{
    ll ans = 0;
    for (ll i = 5; i <= n; i *= 5)
    {
        ans += n / i;
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    ll x = -1, l = 1, r = 5 * (n + 1);
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (count(m) >= n)
        {
            x = m;
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    if (x == -1 || count(x) != n)
    {
        cout << 0 << endl;
        return;
    }
    cout << 5 << endl;
    for (ll i = 0; i < 5; i++)
    {
        const ll ans = x + i;
        cout << ans << " ";
    }
    cout << endl;
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