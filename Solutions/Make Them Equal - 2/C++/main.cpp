// Problem: Make Them Equal
// Link to the problem: https://codeforces.com/contest/1154/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    vector<ll> a(s.begin(), s.end());
    const ll m = a.size();
    if (m == 1)
    {
        cout << 0 << endl;
        return;
    }
    sort(a.begin(), a.end());
    if (m == 2)
    {
        const ll x = a[1] - a[0], ans = x & 1 ? x : x / 2;
        cout << ans << endl;
        return;
    }
    if (m == 3)
    {
        const ll x = a[1] - a[0], y = a[2] - a[1], ans = x == y ? x : -1;
        cout << ans << endl;
        return;
    }
    cout << -1 << endl;
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