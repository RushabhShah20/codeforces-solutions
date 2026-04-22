// Problem: Prefix Min and Suffix Max
// Link to the problem: https://codeforces.com/contest/2123/problem/C
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
    ll mn = a[0], mx = a[n - 1];
    string ans(n, '0');
    ans[0] = '1';
    ans[n - 1] = '1';
    for (ll i = 1; i < n; i++)
    {
        if (a[i] < mn)
        {
            ans[i] = '1';
            mn = a[i];
        }
    }
    for (ll i = n - 1; i >= 1; i--)
    {
        if (a[i] > mx)
        {
            ans[i] = '1';
            mx = a[i];
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