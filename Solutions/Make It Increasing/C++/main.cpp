// Problem: Make It Increasing
// Link to the problem: https://codeforces.com/contest/1675/problem/B
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
    ll ans = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        while (a[i] >= a[i + 1])
        {
            ans++;
            a[i] /= 2;
            if (a[i] == 0)
            {
                break;
            }
        }
        if (a[i] == 0 && a[i + 1] == 0)
        {
            ans = -1;
            break;
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