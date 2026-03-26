// Problem: Roma and Lucky Numbers
// Link to the problem: https://codeforces.com/contest/262/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, ans = 0;
    cin >> n >> k;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        ll y = 0;
        while (x > 0)
        {
            const ll z = x % 10;
            if (z == 4 || z == 7)
            {
                y++;
            }
            x /= 10;
        }
        if (y <= k)
        {
            ans++;
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