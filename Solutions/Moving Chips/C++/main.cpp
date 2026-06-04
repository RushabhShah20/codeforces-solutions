// Problem: Moving Chips
// Link to the problem: https://codeforces.com/contest/1923/problem/A
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
    ll j = n + 1, k = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            j = min(j, i);
            k = max(k, i);
        }
    }
    ll ans = 0;
    for (ll i = j; i <= k; i++)
    {
        if (a[i] == 0)
        {
            ans++;
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