// Problem: Woeful Permutation
// Link to the problem: https://codeforces.com/contest/1712/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n);
    if (n & 1)
    {
        ans[0] = 1;
        ll x = 2, y = 3;
        for (ll i = 1; i < n; i++)
        {
            if (i & 1)
            {
                ans[i] = y;
                y += 2;
            }
            else
            {
                ans[i] = x;
                x += 2;
            }
        }
    }
    else
    {
        ll x = 2, y = 1;
        for (ll i = 0; i < n; i++)
        {
            if (i & 1)
            {
                ans[i] = y;
                y += 2;
            }
            else
            {
                ans[i] = x;
                x += 2;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}