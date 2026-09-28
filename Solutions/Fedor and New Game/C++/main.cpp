// Problem: Fedor and New Game
// Link to the problem: https://codeforces.com/contest/467/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<bitset<32>> a(m);
    for (ll i = 0; i < m; i++)
    {
        ll x;
        cin >> x;
        a[i] = bitset<32>(x);
    }
    ll x;
    cin >> x;
    bitset<32> y(x);
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        ll z = 0;
        for (ll j = 0; j < 32; j++)
        {
            z += a[i][j] != y[j];
        }
        ans += z <= k;
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