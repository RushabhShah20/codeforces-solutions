// Problem: Cherry Bomb
// Link to the problem: https://codeforces.com/contest/2106/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    ll mx = LLONG_MIN, mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
        mn = min(mn, a[i]);
    }
    set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
        if (b[i] != -1)
        {
            s.insert(a[i] + b[i]);
        }
    }
    const ll ans = s.size() > 1 ? 0 : (s.empty() ? (mn + k - mx + 1) : (*s.begin() < mx || mn + k < *s.begin() ? 0 : 1));
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