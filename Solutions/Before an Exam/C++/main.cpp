// Problem: Before an Exam
// Link to the problem: https://codeforces.com/contest/4/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<pair<ll, ll>> a(n);
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
        x += a[i].first;
        y += a[i].second;
    }
    if (k >= x && k <= y)
    {
        cout << "YES" << endl;
        vector<ll> ans(n);
        for (ll i = 0; i < n; i++)
        {
            ans[i] = a[i].first;
        }
        ll z = k - x;
        for (ll i = 0; i < n; i++)
        {
            const ll w = min(z, a[i].second - a[i].first);
            ans[i] += w;
            z -= w;
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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