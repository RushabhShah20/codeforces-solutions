// Problem: Binary Digit Score
// Link to the problem: https://codeforces.com/contest/2259/problem/C
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
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != 0)
        {
            r = i;
            break;
        }
    }
    if (l != -1 && a[l] == -1)
    {
        a[l] = 1;
    }
    if (r != -1 && a[r] == -1)
    {
        a[r] = 1;
    }
    for (ll i = l + 1; i < r; i++)
    {
        if (a[i] == -1)
        {
            a[i] = 0;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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