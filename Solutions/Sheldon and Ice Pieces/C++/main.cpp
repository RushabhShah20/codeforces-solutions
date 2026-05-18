// Problem: Sheldon and Ice Pieces
// Link to the problem: https://codeforces.com/contest/328/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    vector<ll> a(10, 0), b(10, 0);
    const ll n = s.size(), m = t.size();
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - '0']++;
    }
    for (ll i = 0; i < m; i++)
    {
        b[t[i] - '0']++;
    }
    ll ans = LLONG_MAX;
    for (ll i = 0; i < 10; i++)
    {
        if (i == 5 || i == 9 || i == 2 || i == 6 || a[i] == 0)
        {
            continue;
        }
        ans = min(ans, b[i] / a[i]);
    }
    if (a[2] != 0 || a[5] != 0)
    {
        ans = min(ans, (b[2] + b[5]) / (a[2] + a[5]));
    }
    if (a[6] != 0 || a[9] != 0)
    {
        ans = min(ans, (b[6] + b[9]) / (a[6] + a[9]));
    }
    ans = ans == LLONG_MAX ? 0 : ans;
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