// Problem: War of the Corporations
// Link to the problem: https://codeforces.com/contest/625/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    ll ans = 0;
    for (ll i = 0; i < n;)
    {
        if (s.substr(i, m) == t)
        {
            ans++;
            i += m;
        }
        else
        {
            i++;
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