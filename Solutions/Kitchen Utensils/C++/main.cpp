// Problem: Kitchen Utensils
// Link to the problem: https://codeforces.com/contest/1032/problem/A
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
    ll y = 0;
    for (const pair<ll, ll> i : m)
    {
        y = max(y, i.second);
    }
    const ll mx = k * ((y + k - 1) / k);
    ll ans = 0;
    for (const pair<ll, ll> i : m)
    {
        ans += mx - i.second;
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