// Problem: Merge it!
// Link to the problem: https://codeforces.com/contest/1176/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(3, 0);
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        a[z % 3]++;
    }
    const ll x = min(a[1], a[2]), y = max(a[1], a[2]), ans = a[0] + x + (y - x) / 3;
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