// Problem: Roof Construction
// Link to the problem: https://codeforces.com/contest/1632/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n);
    const ll x = powl(2, floor(log2(n - 1)));
    for (ll i = 0; i < x; i++)
    {
        ans[x - 1 - i] = i;
    }
    for (ll i = x; i < n; i++)
    {
        ans[i] = i;
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