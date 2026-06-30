// Problem: Removals Game
// Link to the problem: https://codeforces.com/contest/2002/problem/B
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
    bool x = true, y = true;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            x = false;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[n - 1 - i])
        {
            y = false;
            break;
        }
    }
    const string ans = x || y ? "Bob" : "Alice";
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