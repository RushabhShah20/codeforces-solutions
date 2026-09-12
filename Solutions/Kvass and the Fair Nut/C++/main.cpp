// Problem: Kvass and the Fair Nut
// Link to the problem: https://codeforces.com/contest/1084/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll x = 0, mn = LLONG_MAX;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
        mn = min(mn, a[i]);
    }
    if (x < k)
    {
        cout << -1 << endl;
        return;
    }
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        y += a[i] - mn;
        a[i] = mn;
    }
    if (y >= k)
    {
        cout << mn << endl;
        return;
    }
    k -= y;
    for (ll i = 1; i <= mn; i++)
    {
        if (k <= i * n)
        {
            cout << mn - i << endl;
            return;
        }
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