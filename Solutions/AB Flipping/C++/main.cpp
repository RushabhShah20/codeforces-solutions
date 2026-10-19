// Problem: AB Flipping
// Link to the problem: https://codeforces.com/contest/1896/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll x = -1, y = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            x = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == 'B')
        {
            y = i;
            break;
        }
    }
    const ll ans = x == -1 || y == -1 || x > y ? 0 : y - x;
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