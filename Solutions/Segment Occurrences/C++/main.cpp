// Problem: Segment Occurrences
// Link to the problem: https://codeforces.com/contest/1016/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;
    vector<ll> a(n + 1);
    for (ll i = 0; i <= n - m; i++)
    {
        if (s.substr(i, m) == t)
        {
            a[i + 1] = 1;
        }
    }
    for (ll i = 1; i <= n; i++)
    {
        a[i] += a[i - 1];
    }
    for (ll i = 0; i < k; i++)
    {
        ll l, r;
        cin >> l >> r;
        const ll ans = r - l + 1 < m ? 0 : a[r - m + 1] - a[l - 1];
        cout << ans << endl;
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