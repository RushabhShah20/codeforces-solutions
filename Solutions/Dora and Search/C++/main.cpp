// Problem: Dora and Search
// Link to the problem: https://codeforces.com/contest/1793/problem/C
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
    ll l = 0, r = n - 1, x = 1, y = n;
    while (l <= r)
    {
        if (a[l] == x)
        {
            l++;
            x++;
        }
        else if (a[l] == y)
        {
            l++;
            y--;
        }
        else if (a[r] == x)
        {
            r--;
            x++;
        }
        else if (a[r] == y)
        {
            r--;
            y--;
        }
        else
        {
            cout << l + 1 << " " << r + 1 << endl;
            return;
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