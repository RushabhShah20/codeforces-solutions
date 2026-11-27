// Problem: New Skateboard
// Link to the problem: https://codeforces.com/contest/628/problem/B
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
    for (ll i = 0; i < n; i++)
    {
        ans += (s[i] - '0') % 4 == 0;
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        const ll x = 10 * (s[i - 1] - '0') + s[i] - '0';
        if (x % 4 == 0)
        {
            ans += i;
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