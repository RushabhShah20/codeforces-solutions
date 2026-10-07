// Problem: Array Sharpening
// Link to the problem: https://codeforces.com/contest/1291/problem/B
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
    ll x = -1, y = n;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= i)
        {
            x = i;
        }
        else
        {
            break;
        }
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] >= n - 1 - i)
        {
            y = i;
        }
        else
        {
            break;
        }
    }
    const string ans = x >= y ? "Yes" : "No";
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