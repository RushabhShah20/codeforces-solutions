// Problem: Different Differences
// Link to the problem: https://codeforces.com/contest/1772/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> ans(n);
    ans[n - 1] = k;
    ll x = 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        ans[i] = max(i + 1, ans[i + 1] - x);
        x++;
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}