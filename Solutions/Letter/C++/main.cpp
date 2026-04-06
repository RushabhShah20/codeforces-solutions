// Problem: Letter
// Link to the problem: https://codeforces.com/contest/14/problem/A
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
    ll l = 0, r = m - 1, u = 0, d = n - 1;
    while (l < m)
    {
        bool x = true;
        for (ll i = 0; i < n; i++)
        {
            if (s[i][l] == '*')
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            l++;
        }
        else
        {
            break;
        }
    }
    while (r >= 0)
    {
        bool x = true;
        for (ll i = 0; i < n; i++)
        {
            if (s[i][r] == '*')
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            r--;
        }
        else
        {
            break;
        }
    }
    while (u < n)
    {
        bool x = true;
        for (ll j = 0; j < m; j++)
        {
            if (s[u][j] == '*')
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            u++;
        }
        else
        {
            break;
        }
    }
    while (d >= 0)
    {
        bool x = true;
        for (ll j = 0; j < m; j++)
        {
            if (s[d][j] == '*')
            {
                x = false;
                break;
            }
        }
        if (x)
        {
            d--;
        }
        else
        {
            break;
        }
    }
    for (ll i = u; i <= d; i++)
    {
        for (ll j = l; j <= r; j++)
        {
            cout << s[i][j];
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
    solve();
    return 0;
}