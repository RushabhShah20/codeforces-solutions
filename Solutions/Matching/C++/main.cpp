// Problem: Matching
// Link to the problem: https://codeforces.com/contest/1821/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s[0] == '0')
    {
        cout << 0 << endl;
        return;
    }
    const ll n = s.size();
    ll ans = 1;
    if (s[0] == '?')
    {
        ans *= 9;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            ans *= 10;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}