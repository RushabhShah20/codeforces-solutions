// Problem: Unequal Array
// Link to the problem: https://codeforces.com/contest/1672/problem/C
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
    ll l = -1, r = -1;
    for (ll i = 0; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            if (l == -1)
            {
                l = i;
            }
            r = i;
        }
    }
    const ll ans = l == -1 || l == r ? 0 : (r - l == 1 ? 1 : r - l - 1);
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