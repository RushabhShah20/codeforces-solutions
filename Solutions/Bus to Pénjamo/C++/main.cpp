// Problem: Bus to Pénjamo
// Link to the problem: https://codeforces.com/contest/2022/problem/A
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
    sort(a.begin(), a.end(), greater<>());
    ll ans = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll x = a[i] >> 1;
        if (k >= x)
        {
            y += a[i] & 1;
            ans += 2 * x;
            k -= x;
        }
        else
        {
            break;
        }
    }
    while (y > k)
    {
        y -= 2;
        k--;
    }
    ans += y;
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