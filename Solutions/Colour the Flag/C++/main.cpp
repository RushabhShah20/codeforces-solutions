// Problem: Colour the Flag
// Link to the problem: https://codeforces.com/contest/1534/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n), a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    a = s;
    b = s;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    a[i][j] = 'R';
                }
                else
                {
                    a[i][j] = 'W';
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (b[i][j] == '.')
            {
                if ((i + j) % 2 == 0)
                {
                    b[i][j] = 'W';
                }
                else
                {
                    b[i][j] = 'R';
                }
            }
        }
    }
    bool x = true, y = true;
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (a[i][j] == a[i + 1][j])
            {
                x = false;
                break;
            }
        }
    }
    for (ll j = 0; j < m - 1; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i][j] == a[i][j + 1])
            {
                x = false;
                break;
            }
        }
    }
    for (ll i = 0; i < n - 1; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            if (b[i][j] == b[i + 1][j])
            {
                y = false;
                break;
            }
        }
    }
    for (ll j = 0; j < m - 1; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (b[i][j] == b[i][j + 1])
            {
                y = false;
                break;
            }
        }
    }
    if (x)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << a[i] << endl;
        }
        return;
    }
    if (y)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << b[i] << endl;
        }
        return;
    }
    cout << "NO" << endl;
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