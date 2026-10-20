// Problem: Hey, It's Me, Souvlakity
// Link to the problem: https://codeforces.com/contest/2261/problem/A
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
        if (s[i] == '1')
        {
            x = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (s[i] == '1')
        {
            y = i;
            break;
        }
    }
    for (ll i = x + 1; i < y; i++)
    {
        if (s[i] == '1')
        {
            cout << y - x << endl;
            return;
        }
    }
    const ll ans = x == y ? 0 : 1;
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