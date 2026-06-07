// Problem: Absolute Maximization
// Link to the problem: https://codeforces.com/contest/1763/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    bitset<32> x(0), y((1LL << 33) - 1);
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        const bitset<32> w(z);
        x |= w;
        y &= w;
    }
    const ll a = x.to_ullong(), b = y.to_ullong(), ans = a - b;
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