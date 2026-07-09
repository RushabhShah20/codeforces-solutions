// Problem: Sage's Birthday (easy version)
// Link to the problem: https://codeforces.com/contest/1419/problem/D1
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
    sort(a.begin(), a.end());
    vector<ll> ans(n);
    ll j = 0;
    for (ll i = 1; i < n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }
    for (ll i = 0; i < n; i += 2)
    {
        ans[i] = a[j];
        j++;
    }
    cout << ((n - 1) >> 1) << endl;
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
    solve();
    return 0;
}