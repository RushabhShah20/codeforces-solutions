// Problem: Div Times Mod
// Link to the problem: https://codeforces.com/contest/1085/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = LLONG_MAX;
    for (ll i = 1; i < k; i++)
    {
        if (n % i == 0)
        {
            const ll j = n / i, x = j * k + i;
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
    solve();
    return 0;
}