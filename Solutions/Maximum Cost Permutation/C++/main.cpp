// Problem: Maximum Cost Permutation
// Link to the problem: https://codeforces.com/contest/2144/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    vector<bool> b(n + 1, false);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        b[a[i]] = true;
    }
    vector<ll> c;
    for (ll i = n; i >= 1; i--)
    {
        if (!b[i])
        {
            c.push_back(i);
        }
    }
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = c[j];
            j++;
        }
    }
    ll l = -1, r = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != i + 1)
        {
            r = i;
            break;
        }
    }
    const ll ans = l == -1 || r == -1 || l == r ? 0 : r - l + 1;
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