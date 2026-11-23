// Problem: Turtle Tenacity: Continual Mods
// Link to the problem: https://codeforces.com/contest/1933/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 1000000001;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x = min(x, a[i]);
    }
    ll y = 0;
    bool z = false;
    for (ll i = 0; i < n; i++)
    {
        y += x == a[i];
        if (a[i] % x != 0)
        {
            z = true;
        }
    }
    const string ans = y == 1 || z ? "YES" : "NO";
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