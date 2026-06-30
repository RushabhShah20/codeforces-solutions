// Problem: Another Puzzle from Papyrus
// Link to the problem: https://codeforces.com/contest/2238/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    bool z = true;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] < b[i])
        {
            z = false;
        }
    }
    if (z)
    {
        ll ans = 0;
        for (ll i = 0; i < n; i++)
        {
            ans += a[i] - b[i];
        }
        cout << ans << endl;
    }
    else
    {
        sort(a.begin(), a.end(), greater<>());
        sort(b.begin(), b.end(), greater<>());
        for (ll i = 0; i < n; i++)
        {
            if (a[i] < b[i])
            {
                cout << -1 << endl;
                return;
            }
        }
        ll ans = k;
        for (ll i = 0; i < n; i++)
        {
            ans += a[i] - b[i];
        }
        cout << ans << endl;
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