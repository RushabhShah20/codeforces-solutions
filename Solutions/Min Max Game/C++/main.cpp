// Problem: Min Max Game
// Link to the problem: https://codeforces.com/contest/2263/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        z & 1 ? x++ : y++;
    }
    const string ans = x >= y ? "Bessie" : "Elsie";
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