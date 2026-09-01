// Problem: Gift Carpet
// Link to the problem: https://codeforces.com/contest/1862/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    const string t = "vika";
    ll k = 0;
    for (ll j = 0; j < m; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (s[i][j] == t[k])
            {
                k++;
                if (k == 4)
                {
                    break;
                }
                break;
            }
        }
    }
    const string ans = k == 4 ? "YES" : "NO";
    cout << ans << endl;
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