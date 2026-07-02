// Problem: Fox and Number Game
// Link to the problem: https://codeforces.com/contest/389/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        y = i == 0 ? x : __gcd(y, x);
    }
    const ll ans = n * y;
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