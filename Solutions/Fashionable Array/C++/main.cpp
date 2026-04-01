// Problem: Fashionable Array
// Link to the problem: https://codeforces.com/contest/2110/problem/A
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
    sort(a.begin(), a.end());
    if (a[0] % 2 == a[n - 1] % 2)
    {
        cout << 0 << endl;
        return;
    }
    ll l = n, r = n;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] % 2 != a[0] % 2)
        {
            l = i;
            break;
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[n - i - 1] % 2 != a[n - 1] % 2)
        {
            r = i;
            break;
        }
    }
    cout << min(l, r) << endl;
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