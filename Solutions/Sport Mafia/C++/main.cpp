// Problem: Sport Mafia
// Link to the problem: https://codeforces.com/contest/1195/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = 0;
    ll l = 1, r = n;
    while (l <= r)
    {
        const ll m = l + (r - l) / 2;
        if (m * (m + 1) / 2 - (n - m) <= k)
        {
            ans = m;
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    ans = n - ans;
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