// Problem: Souvlaki VS. Kalamaki
// Link to the problem: https://codeforces.com/contest/2163/problem/A
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
    bool x = false;
    for (int i = 0; i < n - 1; i++)
    {
        if (i % 2 != 0)
        {
            if (a[i] != a[i + 1])
            {
                x = true;
                break;
            }
        }
    }
    if (x == true)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
    }
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