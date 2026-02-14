// Problem: Where's the Bishop?
// Link to the problem: https://codeforces.com/contest/1692/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> a(8);
    for (ll i = 0; i < 8; i++)
    {
        cin >> a[i];
    }
    if (a[0][0] == '#' && a[0][1] == '#' && a[1][0] == '#' && a[1][1] == '#')
    {
        cout << "1 1" << endl;
        return;
    }
    if (a[0][7] == '#' && a[0][6] == '#' && a[1][7] == '#' && a[1][6] == '#')
    {
        cout << "1 8" << endl;
        return;
    }
    if (a[7][0] == '#' && a[6][0] == '#' && a[7][1] == '#' && a[6][1] == '#')
    {
        cout << "8 1" << endl;
        return;
    }
    if (a[7][7] == '#' && a[7][6] == '#' && a[6][7] == '#' && a[6][6] == '#')
    {
        cout << "8 8" << endl;
        return;
    }
    for (ll i = 1; i < 7; i++)
    {
        for (ll j = 1; j < 7; j++)
        {
            if (a[i][j] == '#' && a[i - 1][j - 1] == '#' && a[i + 1][j + 1] == '#' && a[i - 1][j + 1] == '#' && a[i + 1][j - 1] == '#')
            {
                cout << i + 1 << " " << j + 1 << endl;
                return;
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