// Problem: Hall of Fame
// Link to the problem: https://codeforces.com/contest/1779/problem/A
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
    bool x = false, y = false;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            x = true;
        }
        else
        {
            y = true;
        }
    }
    if (!x || !y)
    {
        cout << -1 << endl;
        return;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i - 1] == 'L' && s[i] == 'R')
        {
            cout << i << endl;
            return;
        }
    }
    cout << 0 << endl;
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