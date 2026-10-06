// Problem: The Picky Cat
// Link to the problem: https://codeforces.com/contest/2102/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x;
    cin >> x;
    ll y = 0;
    for (ll i = 1; i < n; i++)
    {
        ll z;
        cin >> z;
        y += abs(z) >= abs(x);
    }
    const string ans = y < (n - 1) >> 1 ? "NO" : "YES";
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