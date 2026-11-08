// Problem: Optimal Reduction
// Link to the problem: https://codeforces.com/contest/1713/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll l = 0, r = n - 1;
    while (l < n - 1 && a[l] <= a[l + 1])
    {
        l++;
    }
    while (r >= 1 && a[r] <= a[r - 1])
    {
        r--;
    }
    const string ans = l >= r ? "YES" : "NO";
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