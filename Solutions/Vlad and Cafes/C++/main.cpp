// Problem: Vlad and Cafes
// Link to the problem: https://codeforces.com/contest/886/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]] = max(m[a[i]], i);
    }
    ll mn = n + 1;
    for (const pair<ll, ll> i : m)
    {
        mn = min(mn, i.second);
    }
    const ll ans = a[mn];
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