// Problem: Robot Sequence
// Link to the problem: https://codeforces.com/contest/626/problem/A
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
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x = 0, y = 0;
        for (ll j = i; j < n; j++)
        {
            if (s[j] == 'L')
            {
                x--;
            }
            if (s[j] == 'R')
            {
                x++;
            }
            if (s[j] == 'U')
            {
                y++;
            }
            if (s[j] == 'D')
            {
                y--;
            }
            if (x == 0 && y == 0)
            {
                ans++;
            }
        }
    }
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