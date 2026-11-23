// Problem: Robot Program
// Link to the problem: https://codeforces.com/contest/2070/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, k;
    cin >> n >> x >> k;
    string s;
    cin >> s;
    ll ans = 0;
    for (ll i = 0; i < n && k > 0; i++)
    {
        x += s[i] == 'L' ? -1 : 1;
        k--;
        if (x == 0)
        {
            ans = 1;
            break;
        }
    }
    if (ans == 1 && k > 0)
    {
        ll y = 0;
        for (ll i = 0; i < n; i++)
        {
            y += s[i] == 'L' ? -1 : 1;
            if (y == 0)
            {
                ans += k / (i + 1);
                break;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}