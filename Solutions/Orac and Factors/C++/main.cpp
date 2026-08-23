// Problem: Orac and Factors
// Link to the problem: https://codeforces.com/contest/1350/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll y = 1;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            y = i;
            break;
        }
    }
    const ll ans = n & 1 ? n + (y == 1 ? n : y) + (k - 1) * 2 : n + 2 * k;
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