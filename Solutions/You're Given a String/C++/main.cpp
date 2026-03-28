// Problem: You're Given a String...
// Link to the problem: https://codeforces.com/contest/23/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0;
    map<string, ll> m;
    for (ll k = 1; k < n; k++)
    {
        for (ll i = 0; i + k <= n; i++)
        {
            const string t = s.substr(i, k);
            m[t]++;
            if (m[t] >= 2)
            {
                ans = max(ans, k);
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