// Problem: Team Training
// Link to the problem: https://codeforces.com/contest/2091/problem/B
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
    ll ans = 0, x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (x * a[i - 1] >= k)
        {
            ans++;
            x = 1;
        }
        else
        {
            x++;
        }
    }
    if (x * a[n - 1] >= k)
    {
        ans++;
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