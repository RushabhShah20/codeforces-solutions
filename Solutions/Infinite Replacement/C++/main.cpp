// Problem: Infinite Replacement
// Link to the problem: https://codeforces.com/contest/1674/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    bool x = false;
    for (ll i = 0; i < m; i++)
    {
        if (t[i] == 'a')
        {
            x = true;
            break;
        }
    }
    const ll ans = t == "a" ? 1 : (x ? -1 : (1LL << n));
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