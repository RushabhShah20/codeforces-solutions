// Problem: Cells Not Under Attack
// Link to the problem: https://codeforces.com/contest/701/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    unordered_set<ll> a, b;
    for (ll i = 0; i < m; i++)
    {
        ll x, y;
        cin >> x >> y;
        a.insert(x);
        b.insert(y);
        const ll ans = (n - a.size()) * (n - b.size());
        cout << ans << " ";
    }
    cout << endl;
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