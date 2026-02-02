// Problem: Problemsolving Log
// Link to the problem: https://codeforces.com/contest/1914/problem/A
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
    vector<ll> f(26, 0);
    for (const char &c : s)
    {
        f[c - 'A']++;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (f[i] >= i + 1)
        {
            ans++;
        }
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}