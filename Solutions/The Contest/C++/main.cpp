// Problem: The Contest
// Link to the problem: https://codeforces.com/contest/813/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        x += y;
    }
    ll m;
    cin >> m;
    ll ans = -1;
    bool a = false;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        if (!a)
        {
            if (x <= r)
            {
                ans = max(x, l);
                a = true;
            }
        }
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
    solve();
    return 0;
}