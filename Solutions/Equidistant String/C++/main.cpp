// Problem: Equidistant String
// Link to the problem: https://codeforces.com/contest/545/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size();
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += s[i] != t[i] ? 1 : 0;
    }
    if (x & 1)
    {
        cout << "impossible" << endl;
        return;
    }
    string ans(n, ' ');
    bool y = true;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != t[i])
        {
            x--;
            ans[i] = x & 1 ? s[i] : t[i];
        }
        else
        {
            ans[i] = s[i];
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