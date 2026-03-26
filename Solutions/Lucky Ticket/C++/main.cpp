// Problem: Lucky Ticket
// Link to the problem: https://codeforces.com/contest/146/problem/A
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
    ll x = 0, y = 0;
    bool z = true;
    for (ll i = 0; i < n; i++)
    {
        if (2 * i < n)
        {
            x += (s[i] - '0');
        }
        else
        {
            y += (s[i] - '0');
        }
        if (s[i] != '4' && s[i] != '7')
        {
            z = false;
        }
    }
    if (x == y && z)
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
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}