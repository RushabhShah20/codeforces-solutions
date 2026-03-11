// Problem: Dragons
// Link to the problem: https://codeforces.com/contest/230/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, n;
    cin >> k >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;
        a[i] = make_pair(x, y);
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        if (k <= a[i].first)
        {
            cout << "NO" << endl;
            return;
        }
        k += a[i].second;
    }
    cout << "YES" << endl;
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