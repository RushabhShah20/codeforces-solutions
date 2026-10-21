// Problem: Super-Permutation
// Link to the problem: https://codeforces.com/contest/1822/problem/D
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
        const ll ans = n == 1 ? 1 : -1;
        cout << ans << endl;
    }
    else
    {
        vector<ll> ans(n);
        ll x = n;
        for (ll i = 0; i < n; i += 2)
        {
            ans[i] = x;
            x -= 2;
        }
        x = 1;
        for (ll i = 1; i < n; i += 2)
        {
            ans[i] = x;
            x += 2;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
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