// Problem: Drinks Choosing
// Link to the problem: https://codeforces.com/contest/1195/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        m[x]++;
    }
    ll ans = 0, x = 0, y = (n + 1) >> 1;
    for (const pair<ll, ll> i : m)
    {
        const ll z = i.second >> 1;
        ans += z << 1;
        y -= z;
        x += i.second & 1;
    }
    ans += min(x, y);
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