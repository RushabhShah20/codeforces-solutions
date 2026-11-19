// Problem: Easy Number Challenge
// Link to the problem: https://codeforces.com/contest/236/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    const ll n = a * b * c;
    vector<ll> d(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        for (ll j = i; j <= n; j += i)
        {
            d[j]++;
        }
    }
    ll ans = 0;
    for (ll i = 1; i <= a; i++)
    {
        for (ll j = 1; j <= b; j++)
        {
            for (ll k = 1; k <= c; k++)
            {
                ans = (ans + d[i * j * k]) % (1LL << 30);
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