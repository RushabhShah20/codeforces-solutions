// Problem: Assembly via Remainders
// Link to the problem: https://codeforces.com/contest/1968/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n - 1);
    for (ll i = 0; i < n - 1; i++)
    {
        cin >> a[i];
    }
    vector<ll> ans(n);
    ans[n - 1] = 1000000000;
    for (ll i = n - 2; i >= 0; i--)
    {
        ans[i] = ans[i + 1] - a[i];
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