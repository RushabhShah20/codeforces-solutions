// Problem: Dominant Piranha
// Link to the problem: https://codeforces.com/contest/1433/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        mx = max(mx, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == mx)
        {
            if (i == 0)
            {
                if (a[i] > a[i + 1])
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
            else if (i == n - 1)
            {
                if (a[i] > a[i - 1])
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
            else
            {
                if (a[i] > a[i - 1] || a[i] > a[i + 1])
                {
                    cout << i + 1 << endl;
                    return;
                }
            }
        }
    }
    cout << -1 << endl;
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