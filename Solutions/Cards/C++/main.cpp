// Problem: Cards
// Link to the problem: https://codeforces.com/contest/1220/problem/A
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
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'z')
        {
            x++;
        }
        if (s[i] == 'n')
        {
            y++;
        }
    }
    for (ll i = 0; i < y; i++)
    {
        cout << 1 << " ";
    }
    for (ll i = 0; i < x; i++)
    {
        cout << 0 << " ";
    }
    cout << endl;
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