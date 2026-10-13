// Problem: Swap Game
// Link to the problem: https://codeforces.com/contest/1747/problem/C
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
    ll y = LLONG_MAX;
    for (ll i = 1; i < n; i++)
    {
        ll z;
        cin >> z;
        y = min(y, z);
    }
    const string ans = x > y ? "Alice" : "Bob";
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