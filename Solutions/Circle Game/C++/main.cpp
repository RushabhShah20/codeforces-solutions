// Problem: Circle Game
// Link to the problem: https://codeforces.com/contest/1695/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll mn = LLONG_MAX, j = -1;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x < mn)
        {
            mn = x;
            j = i;
        }
    }
    const string ans = n & 1 ? "Mike" : (!(j & 1) ? "Joe" : "Mike");
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