// Problem: Garland
// Link to the problem: https://codeforces.com/contest/408/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    vector<ll> a(26), b(26);
    const ll n = s.size(), m = t.size();
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 0; i < m; i++)
    {
        b[t[i] - 'a']++;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (b[i] > 0)
        {
            if (a[i] > 0)
            {
                ans += min(a[i], b[i]);
            }
            else
            {
                cout << -1 << endl;
                return;
            }
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