// Problem: Balanced Round
// Link to the problem: https://codeforces.com/contest/1850/problem/D
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
    sort(a.begin(), a.end());
    ll m = 1, count = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] - a[i - 1] > k)
        {
            count = 1;
        }
        else
        {
            count++;
        }
        m = max(m, count);
    }
    const ll ans = n - m;
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}