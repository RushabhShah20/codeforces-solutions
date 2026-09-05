// Problem: Football
// Link to the problem: https://codeforces.com/contest/1773/problem/F
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<pair<ll, ll>> ans(n);
    if (n == 1)
    {
        ans[0] = {a, b};
    }
    else
    {
        if (a + b < n)
        {
            for (ll i = 0; i < a; i++)
            {
                ans[i] = {1, 0};
            }
            for (ll i = a; i < a + b; i++)
            {
                ans[i] = {0, 1};
            }
        }
        else if (a >= n - 1)
        {
            const ll x = a - (n - 1);
            if (x == b)
            {
                ans[0] = {2, 0};
                for (ll i = 1; i < n - 1; i++)
                {
                    ans[i] = {1, 0};
                }
                ans[n - 1] = {a - n, b};
            }
            else
            {
                for (ll i = 0; i < n - 1; i++)
                {
                    ans[i] = {1, 0};
                }
                ans[n - 1] = {x, b};
            }
        }
        else
        {
            for (ll i = 0; i < a; i++)
            {
                ans[i] = {1, 0};
            }
            for (ll i = a; i < n - 1; i++)
            {
                ans[i] = {0, 1};
            }
            ans[n - 1] = {0, b - (n - 1 - a)};
        }
    }
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        m += ans[i].first == ans[i].second ? 1 : 0;
    }
    cout << m << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i].first << ":" << ans[i].second << endl;
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