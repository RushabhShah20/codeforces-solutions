// Problem: Magic Forest
// Link to the problem: https://codeforces.com/contest/922/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j++)
        {
            const ll k = i ^ j;
            if (j <= k && k <= n && i + j > k)
            {
                ans++;
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
    solve();
    return 0;
}