// Problem: Dima and To-do List
// Link to the problem: https://codeforces.com/contest/366/problem/B
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
    ll ans = 0, x = LLONG_MAX;
    for (ll i = 0; i < k; i++)
    {
        ll y = 0;
        for (ll j = i; j < n; j += k)
        {
            y += a[j];
        }
        if (y < x)
        {
            x = y;
            ans = i + 1;
        }
    }
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