// Problem: Jzzhu and Sequences
// Link to the problem: https://codeforces.com/contest/450/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    constexpr ll m = 1000000007;
    ll n;
    cin >> n;
    const vector<ll> a = {x - y, x, y, y - x, -x, -y};
    ll ans = a[n % 6];
    ans = (ans % m + m) % m;
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