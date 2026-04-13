// Problem: Arpa’s obvious problem and Mehrdad’s terrible solution
// Link to the problem: https://codeforces.com/contest/742/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x;
    cin >> n >> x;
    map<ll, ll> m;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        ans += m[y ^ x];
        m[y]++;
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