// Problem: Balanced Remainders
// Link to the problem: https://codeforces.com/contest/1490/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(3);
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x % 3]++;
    }
    const ll k = n / 3;
    ll ans = 0;
    for (ll j = 0; j < 3; j++)
    {
        for (ll i = 0; i < 3; i++)
        {
            if (a[i] > k)
            {
                const ll x = a[i] - k;
                a[i] -= x;
                a[(i + 1) % 3] += x;
                ans += x;
            }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}