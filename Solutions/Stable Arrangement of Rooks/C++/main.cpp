// Problem: Stable Arrangement of Rooks
// Link to the problem: https://codeforces.com/contest/1621/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k > (n + 1) / 2)
    {
        cout << -1 << endl;
        return;
    }
    vector<string> ans(n, string(n, '.'));
    for (ll i = 0; i < n; i += 2)
    {
        if (k == 0)
        {
            break;
        }
        ans[i][i] = 'R';
        k--;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}