// Problem: Luntik and Subsequences
// Link to the problem: https://codeforces.com/contest/1582/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, zeroes = 0, ones = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 0)
        {
            zeroes++;
        }
        if (x == 1)
        {
            ones++;
        }
    }
    const ll ans = pow(2, zeroes) * ones;
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