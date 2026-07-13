// Problem: Game
// Link to the problem: https://codeforces.com/contest/49/problem/D
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
        if (i & 1)
        {
            if (s[i] == '0')
            {
                x++;
            }
            else
            {
                y++;
            }
        }
        else
        {
            if (s[i] == '0')
            {
                y++;
            }
            else
            {
                x++;
            }
        }
    }
    const ll ans = min(x, y);
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