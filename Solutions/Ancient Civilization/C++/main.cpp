// Problem: Ancient Civilization
// Link to the problem: https://codeforces.com/contest/1625/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<bitset<32>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[i] = bitset<32>(x);
    }
    bitset<32> x;
    for (ll i = 0; i < 32; i++)
    {
        ll y = 0;
        for (ll j = 0; j < n; j++)
        {
            y += a[j][i] == 1 ? 1 : 0;
        }
        x[i] = 2 * y > n;
    }
    const ll ans = stoll(x.to_string(), nullptr, 2);
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