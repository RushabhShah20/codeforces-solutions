// Problem: Discounts
// Link to the problem: https://codeforces.com/contest/2143/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(k);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < k; i++)
    {
        cin >> b[i];
    }
    sort(a.begin(), a.end(), greater<>());
    sort(b.begin(), b.end());
    ll ans = 0, i = 0;
    for (ll j = 0; j < k; j++)
    {
        ll x = b[j];
        while (i < n && x > 1)
        {
            ans += a[i];
            i++;
            x--;
        }
        i++;
    }
    while (i < n)
    {
        ans += a[i];
        i++;
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