// Problem: Flip the Bit (Easy Version)
// Link to the problem: https://codeforces.com/contest/2217/problem/B
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
        b[i]--;
    }
    const ll j = b[0], z = a[j];
    ll x = 0, c = 0;
    for (ll i = 0; i < j; i++)
    {
        const ll d = a[i] != z;
        if (c != d)
        {
            x++;
        }
        c = d;
    }
    ll y = 0;
    c = 0;
    for (ll i = n - 1; i > j; i--)
    {
        const ll d = a[i] != z;
        if (c != d)
        {
            y++;
        }
        c = d;
    }
    const ll ans = max(x, y) + (max(x, y) & 1);
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