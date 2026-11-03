// Problem: Repainting Street
// Link to the problem: https://codeforces.com/contest/1415/problem/B
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
    ll ans = n;
    for (ll i = 1; i <= 100; i++)
    {
        ll x = 0, j = 0;
        while (j < n)
        {
            if (a[j] == i)
            {
                j++;
            }
            else
            {
                x++;
                j += k;
            }
        }
        ans = min(ans, x);
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