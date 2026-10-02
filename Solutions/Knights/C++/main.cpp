// Problem: Knights
// Link to the problem: https://codeforces.com/contest/1221/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n, string(n, 'B'));
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (!(i + j & 1))
            {
                s[i][j] = 'W';
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << s[i] << endl;
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