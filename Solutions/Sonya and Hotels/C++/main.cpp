// Problem: Sonya and Hotels
// Link to the problem: https://codeforces.com/contest/1004/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_set<ll> s;
    for (ll i = 0; i < n; i++)
    {
        const ll x = a[i] - k, y = a[i] + k;
        ll p = LLONG_MAX, q = LLONG_MAX;
        for (ll j = 0; j < n; j++)
        {
            p = min(p, abs(x - a[j]));
            q = min(q, abs(y - a[j]));
        }
        if (p == k)
        {
            s.insert(x);
        }
        if (q == k)
        {
            s.insert(y);
        }
    }
    const ll ans = s.size();
    cout << ans << endl;
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