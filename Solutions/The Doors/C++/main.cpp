// Problem: The Doors
// Link to the problem: https://codeforces.com/contest/1143/problem/A
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
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            x = i + 1;
        }
        else
        {
            y = i + 1;
        }
    }
    const ll ans = min(x, y);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}