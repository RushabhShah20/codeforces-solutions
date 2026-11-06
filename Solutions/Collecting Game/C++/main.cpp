// Problem: Collecting Game
// Link to the problem: https://codeforces.com/contest/1904/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<pair<ll, ll>> b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[i] = {a[i], i};
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    vector<ll> ans(n), c(n);
    c[n - 1] = n - 1;
    ans[b[n - 1].second] = n - 1;
    for (ll i = n - 2; i >= 0; i--)
    {
        if (a[i] >= b[i + 1].first)
        {
            c[i] = c[i + 1];
        }
        else
        {
            c[i] = i;
        }
        ans[b[i].second] = c[i];
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