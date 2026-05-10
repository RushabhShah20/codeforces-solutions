// Problem: Flip Flop Sum
// Link to the problem: https://codeforces.com/contest/1778/problem/A
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
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i];
    }
    bool y = false;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] == a[i - 1] && a[i] == -1)
        {
            y = true;
            break;
        }
    }
    const ll ans = x == n ? n - 4 : y ? x + 4 : x;
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