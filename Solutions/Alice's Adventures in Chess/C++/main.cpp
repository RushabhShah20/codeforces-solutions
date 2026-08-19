// Problem: Alice's Adventures in "Chess"
// Link to the problem: https://codeforces.com/contest/2028/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    string s;
    cin >> s;
    ll x = 0, y = 0;
    for (ll j = 0; j < 100; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            y += s[i] == 'N' ? 1 : 0;
            y += s[i] == 'S' ? -1 : 0;
            x += s[i] == 'E' ? 1 : 0;
            x += s[i] == 'W' ? -1 : 0;
            if (a == x && b == y)
            {
                cout << "YES" << endl;
                return;
            }
        }
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