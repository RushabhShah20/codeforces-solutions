// Problem: Face Detection
// Link to the problem: https://codeforces.com/contest/549/problem/A
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
    const string t = "acef";
    ll ans = 0;
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < m - 1; j++)
        {
            string x;
            x.append(1, s[i][j]);
            x.append(1, s[i + 1][j]);
            x.append(1, s[i][j + 1]);
            x.append(1, s[i + 1][j + 1]);
            sort(x.begin(), x.end());
            if (t == x)
            {
                ans++;
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