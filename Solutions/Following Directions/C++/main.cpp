// Problem: Following Directions
// Link to the problem: https://codeforces.com/contest/1791/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    bool ans = false;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'U')
        {
            y++;
        }
        else if (s[i] == 'D')
        {
            y--;
        }
        else if (s[i] == 'L')
        {
            x--;
        }
        else
        {
            x++;
        }
        if (x == 1 && y == 1)
        {
            ans = true;
            break;
        }
    }
    if (ans == true)
    {
        cout << "YES" << endl;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}