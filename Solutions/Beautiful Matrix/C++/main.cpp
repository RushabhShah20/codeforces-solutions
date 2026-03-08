// Problem: Beautiful Matrix
// Link to the problem: https://codeforces.com/contest/263/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(5);
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            cin >> s[i][j];
        }
    }
    ll x = -1, y = -1;
    for (ll i = 0; i < 5; i++)
    {
        for (ll j = 0; j < 5; j++)
        {
            if (s[i][j] == '1')
            {
                x = i;
                y = j;
                break;
            }
        }
    }
    const ll ans = abs(2 - x) + abs(2 - y);
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