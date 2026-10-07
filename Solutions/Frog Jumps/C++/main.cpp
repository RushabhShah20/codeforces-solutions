// Problem: Frog Jumps
// Link to the problem: https://codeforces.com/contest/1324/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0, j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'R')
        {
            ans = max(ans, i - j);
            j = i;
        }
    }
    ans = max(ans, n - j);
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