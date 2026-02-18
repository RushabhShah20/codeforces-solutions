// Problem: osu!mania
// Link to the problem: https://codeforces.com/contest/2009/problem/B
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
    for (ll i = n - 1; i >= 0; i--)
    {
        for (ll j = 0; j < 4; j++)
        {
            if (s[i][j] == '#')
            {
                cout << j + 1 << " ";
            }
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}