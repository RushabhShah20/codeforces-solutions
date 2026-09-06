// Problem: Equal Rectangles
// Link to the problem: https://codeforces.com/contest/1203/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = 4 * n;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    unordered_set<ll> s;
    ll l = 0, r = m - 1;
    while (l <= r)
    {
        if (a[l] != a[l + 1] || a[r] != a[r - 1])
        {
            cout << "NO" << endl;
            return;
        }
        s.insert(a[l] * a[r]);
        l += 2;
        r -= 2;
    }
    const string ans = s.size() == 1 ? "YES" : "NO";
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