// Problem: Convergence
// Link to the problem: https://codeforces.com/contest/2232/problem/A
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
    if (n & 1)
    {
        const ll md = a[n / 2];
        ll ans = 0, i = 0, j = n - 1;
        while (i <= j)
        {
            if (a[i] != md || a[j] != md)
            {
                ans++;
            }
            i++;
            j--;
        }
        cout << ans << endl;
    }
    else
    {
        const ll md1 = a[(n - 1) / 2], md2 = a[n / 2];
        ll x = 0, y = 0, i = 0, j = n - 1;
        while (i <= j)
        {
            if (a[i] != md1 || a[j] != md1)
            {
                x++;
            }
            if (a[i] != md2 || a[j] != md2)
            {
                y++;
            }
            i++;
            j--;
        }
        const ll ans = min(x, y);
        cout << ans << endl;
    }
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