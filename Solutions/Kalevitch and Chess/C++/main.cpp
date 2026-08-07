// Problem: Kalevitch and Chess
// Link to the problem: https://codeforces.com/contest/7/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(8);
    for (ll i = 0; i < 8; i++)
    {
        cin >> s[i];
    }
    ll x = 0;
    for (ll i = 0; i < 8; i++)
    {
        bool y = true;
        for (ll j = 0; j < 8; j++)
        {
            if (s[i][j] == 'W')
            {
                y = false;
                break;
            }
        }
        x += y ? 1 : 0;
    }
    for (ll j = 0; j < 8; j++)
    {
        bool y = true;
        for (ll i = 0; i < 8; i++)
        {
            if (s[i][j] == 'W')
            {
                y = false;
                break;
            }
        }
        x += y ? 1 : 0;
    }
    const ll ans = x == 16 ? 8 : x;
    cout << ans << endl;
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