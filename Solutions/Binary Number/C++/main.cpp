// Problem: Binary Number
// Link to the problem: https://codeforces.com/contest/92/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0, x = 0;
    for (ll i = n - 1; i >= 1; i--)
    {
        const ll y = s[i] - '0' + x;
        if (y == 0)
        {
            ans++;
            x = 0;
        }
        else if (y == 1)
        {
            ans += 2;
            x = 1;
        }
        else if (y == 2)
        {
            ans++;
            x = 1;
        }
    }
    if (x == 1)
    {
        ans++;
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