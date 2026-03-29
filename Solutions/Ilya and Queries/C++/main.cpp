// Problem: Ilya and Queries
// Link to the problem: https://codeforces.com/contest/313/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<ll> p(n);
    p[0] = 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            p[i] = p[i - 1] + 1;
        }
        else
        {
            p[i] = p[i - 1];
        }
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        cin >> l >> r;
        const ll ans = p[r - 1] - p[l - 1];
        cout << ans << endl;
    }
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