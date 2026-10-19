// Problem: Game with Colored Marbles
// Link to the problem: https://codeforces.com/contest/2042/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> a, b;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x]++;
    }
    for (const pair<ll, ll> i : a)
    {
        b[i.second]++;
    }
    ll ans = 0;
    for (const pair<ll, ll> i : b)
    {
        ans += i.first == 1 ? ((i.second + 1) >> 1) << 1 : i.second;
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