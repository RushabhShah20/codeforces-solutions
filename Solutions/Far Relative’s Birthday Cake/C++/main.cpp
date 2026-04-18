// Problem: Far Relative’s Birthday Cake
// Link to the problem: https://codeforces.com/contest/629/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    vector<ll> r(n), c(n);
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (s[i][j] == 'C')
            {
                r[i]++;
                c[j]++;
            }
        }
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ans += r[i] * (r[i] - 1) / 2;
        ans += c[i] * (c[i] - 1) / 2;
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