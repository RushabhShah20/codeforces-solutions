// Problem: Equal Values
// Link to the problem: https://codeforces.com/contest/2111/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = LLONG_MAX;
    ll i = 0;
    while (i < n)
    {
        ll j = i;
        while (j < n - 1 && a[i] == a[j + 1])
        {
            j++;
        }
        const ll x = i * a[i], y = (n - 1 - j) * a[j];
        ans = min(ans, x + y);
        i = j + 1;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}