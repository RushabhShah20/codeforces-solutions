// Problem: Phone Code
// Link to the problem: https://codeforces.com/contest/172/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    const ll m = s[0].size();
    for (ll j = 0; j < m; j++)
    {
        bool x = true;
        for (ll i = 1; i < n; i++)
        {
            if (s[i][j] != s[i - 1][j])
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            ans++;
        }
        else
        {
            break;
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