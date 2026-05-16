// Problem: Bright, Nice, Brilliant
// Link to the problem: https://codeforces.com/contest/1734/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ans[i].resize(i + 1);
        ans[i][0] = ans[i][i] = 1;
        for (ll j = 1; j < i - 1; j++)
        {
            ans[i][j] = 0;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j <= i; j++)
        {
            cout << ans[i][j] << " ";
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