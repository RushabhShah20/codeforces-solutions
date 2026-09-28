// Problem: Binary Cut
// Link to the problem: https://codeforces.com/contest/1971/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 1;
    bool x = false;
    for (ll i = 1; i < n; i++)
    {
        if (s[i - 1] != s[i])
        {
            ans++;
            if (s[i - 1] == '0' && s[i] == '1')
            {
                x = true;
            }
        }
    }
    if (x)
    {
        ans--;
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