// Problem: Card Game
// Link to the problem: https://codeforces.com/contest/1270/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k1, k2;
    cin >> n >> k1 >> k2;
    bool a = false;
    for (ll i = 0; i < k1; i++)
    {
        ll x;
        cin >> x;
        if (x == n)
        {
            a = true;
        }
    }
    for (ll i = 0; i < k2; i++)
    {
        ll x;
        cin >> x;
    }
    const string ans = a ? "YES" : "NO";
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