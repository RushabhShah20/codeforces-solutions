// Problem: Phone Numbers
// Link to the problem: https://codeforces.com/contest/1060/problem/A
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
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '8')
        {
            x++;
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= x; i++)
    {
        ans = max(ans, min(i, (n - i) / 10));
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