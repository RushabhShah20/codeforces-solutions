// Problem: Permutation Sort
// Link to the problem: https://codeforces.com/contest/1525/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    bool x = true;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] != i + 1)
        {
            x = false;
        }
    }
    const ll ans = x ? 0 : (a[0] == 1 || a[n - 1] == n ? 1 : (a[0] == n && a[n - 1] == 1 ? 3 : 2));
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