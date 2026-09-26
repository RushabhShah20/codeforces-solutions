// Problem: Rudolf and 121
// Link to the problem: https://codeforces.com/contest/1941/problem/B
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
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < 0)
        {
            cout << "NO" << endl;
            return;
        }
        const ll x = a[i - 1];
        a[i - 1] -= x;
        a[i] -= 2 * x;
        a[i + 1] -= x;
    }
    const string ans = a[n - 2] != 0 || a[n - 1] != 0 ? "NO" : "YES";
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