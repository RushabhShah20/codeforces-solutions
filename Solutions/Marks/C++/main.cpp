// Problem: Marks
// Link to the problem: https://codeforces.com/contest/152/problem/A
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
    string a(m, '0');
    for (ll j = 0; j < m; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            a[j] = max(a[j], s[i][j]);
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        bool x = false;
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == a[j])
            {
                x = true;
                break;
            }
        }
        ans += x ? 1 : 0;
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