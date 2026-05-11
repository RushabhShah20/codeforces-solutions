// Problem: Not Shading
// Link to the problem: https://codeforces.com/contest/1627/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, r, c;
    cin >> n >> m >> r >> c;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    r--;
    c--;
    bool x = false, y = false, z = false;
    for (ll j = 0; j < m; j++)
    {
        if (s[r][j] == 'B')
        {
            x = true;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i][c] == 'B')
        {
            y = true;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == 'B')
            {
                z = true;
                break;
            }
        }
    }
    if (s[r][c] == 'B')
    {
        cout << 0 << endl;
    }
    else
    {
        if (!z)
        {
            cout << -1 << endl;
        }
        else
        {
            if (x || y)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 2 << endl;
            }
        }
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