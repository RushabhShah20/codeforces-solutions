// Problem: Little Pony and Crystal Mine
// Link to the problem: https://codeforces.com/contest/454/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> ans(n, string(n, '*'));
    for (ll i = 0; i < (n + 1) / 2; i++)
    {
        for (ll j = n / 2 - i; j <= n / 2 + i; j++)
        {
            ans[i][j] = ans[n - i - 1][j] = 'D';
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << endl;
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