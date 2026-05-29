// Problem: Flip Flops
// Link to the problem: https://codeforces.com/contest/2209/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= m)
        {
            const ll x = m - a[i], y = min(k, x);
            if (k > 0)
            {
                m += a[i] + y;
                k -= y;
            }
            else
            {
                m += a[i];
            }
        }
        else
        {
            break;
        }
    }
    cout << m << endl;
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