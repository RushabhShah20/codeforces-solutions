// Problem: Seating On Bus
// Link to the problem: https://codeforces.com/contest/660/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> ans;
    for (ll i = 1; i <= n; i++)
    {
        if (2 * n + 2 * i - 1 <= m)
        {
            ans.push_back(2 * n + 2 * i - 1);
        }
        if (2 * i - 1 <= m)
        {
            ans.push_back(2 * i - 1);
        }
        if (2 * n + 2 * i <= m)
        {
            ans.push_back(2 * n + 2 * i);
        }
        if (2 * i <= m)
        {
            ans.push_back(2 * i);
        }
    }
    for (ll i = 0; i < m; i++)
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
    solve();
    return 0;
}