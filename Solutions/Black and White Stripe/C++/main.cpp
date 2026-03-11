// Problem: Black and White Stripe
// Link to the problem: https://codeforces.com/contest/1690/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll x = 0, ans = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        if (i >= k)
        {
            if (s[i] == 'W')
            {
                x++;
            }
            if (s[i - k] == 'W')
            {
                x--;
            }
        }
        else
        {
            if (s[i] == 'W')
            {
                x++;
            }
        }
        if (i >= k - 1)
        {
            ans = min(ans, x);
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}