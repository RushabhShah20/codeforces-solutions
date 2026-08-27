// Problem: Worms
// Link to the problem: https://codeforces.com/contest/474/problem/B
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
    for (ll i = 1; i < n; i++)
    {
        a[i] += a[i - 1];
    }
    ll k;
    cin >> k;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        ll ans = 0, l = 0, r = n - 1;
        while (l <= r)
        {
            const ll m = l + (r - l) / 2;
            if (x <= a[m])
            {
                ans = m + 1;
                r = m - 1;
            }
            else
            {
                l = m + 1;
            }
        }
        cout << ans << endl;
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