// Problem: Sort the Subarray
// Link to the problem: https://codeforces.com/contest/1821/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    ll l = -1, r = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }
    while (l > 0 && b[l - 1] <= b[l])
    {
        l--;
    }
    while (r < n - 1 && b[r + 1] >= b[r])
    {
        r++;
    }
    cout << l + 1 << " " << r + 1 << endl;
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