// Problem: Lineland Mail
// Link to the problem: https://codeforces.com/contest/567/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll, ll>> ans(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ans[0].first = a[1] - a[0];
    ans[0].second = a[n - 1] - a[0];
    for (ll i = 1; i < n - 1; i++)
    {
        ans[i].first = min(a[i] - a[i - 1], a[i + 1] - a[i]);
        ans[i].second = max(a[i] - a[0], a[n - 1] - a[i]);
    }
    ans[n - 1].first = a[n - 1] - a[n - 2];
    ans[n - 1].second = a[n - 1] - a[0];
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i].first << " " << ans[i].second << endl;
    }
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