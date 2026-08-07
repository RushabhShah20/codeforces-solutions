// Problem: Prison Transfer
// Link to the problem: https://codeforces.com/contest/427/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    ll ans = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x <= m)
        {
            y++;
        }
        else
        {
            ans += max(0LL, y - k + 1);
            y = 0;
        }
    }
    ans += max(0LL, y - k + 1);
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