// Problem: Bus to Udayland
// Link to the problem: https://codeforces.com/contest/711/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < 4; j++)
        {
            if (s[i][j] == 'O' && s[i][j + 1] == 'O')
            {
                s[i][j] = '+';
                s[i][j + 1] = '+';
                x = true;
                break;
            }
        }
        if (x)
        {
            break;
        }
    }
    if (x)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << s[i] << endl;
        }
    }
    else
    {
        cout << "NO" << endl;
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