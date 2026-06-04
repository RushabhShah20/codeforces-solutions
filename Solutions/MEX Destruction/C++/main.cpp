// Problem: MEX Destruction
// Link to the problem: https://codeforces.com/contest/2049/problem/A
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
    ll j = -1, k = n - 1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            j = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            k = i;
            break;
        }
    }
    if (j == -1 && k == n - 1)
    {
        cout << 0 << endl;
        return;
    }
    ll x = 0;
    for (ll i = j; i <= k; i++)
    {
        if (a[i] == 0)
        {
            x++;
        }
    }
    const ll ans = x > 0 ? 2 : 1;
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