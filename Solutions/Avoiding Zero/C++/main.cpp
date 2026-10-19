// Problem: Avoiding Zero
// Link to the problem: https://codeforces.com/contest/1427/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0, y = 0, z = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] > 0 ? x += a[i] : y -= a[i];
        z += a[i];
    }
    if (z == 0)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        sort(a.begin(), a.end());
        if (x > y)
        {
            for (ll i = n - 1; i >= 0; i--)
            {
                cout << a[i] << " ";
            }
        }
        else
        {
            for (ll i = 0; i < n; i++)
            {
                cout << a[i] << " ";
            }
        }
        cout << endl;
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