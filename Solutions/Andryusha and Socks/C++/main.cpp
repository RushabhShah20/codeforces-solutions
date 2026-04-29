// Problem: Andryusha and Socks
// Link to the problem: https://codeforces.com/contest/780/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, y = 0, ans = 0;
    cin >> n;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < 2 * n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
        if (m[x] == 1)
        {
            y++;
        }
        else
        {
            y--;
        }
        ans = max(ans, y);
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