// Problem: CQXYM Count Permutations
// Link to the problem: https://codeforces.com/contest/1581/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 1;
    for (ll i = 3; i <= 2 * n; i++)
    {
        constexpr ll m = 1000000007;
        ans = ans * i % m;
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