// Problem: Zero Sum
// Link to the problem: https://codeforces.com/contest/2247/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        x == -1 ? y++ : y;
    }
    if (n & 1)
    {
        cout << "NO" << endl;
        return;
    }
    const string ans = (n % 4 == 0 && !(y & 1)) || (n % 4 != 0 && y & 1) ? "YES" : "NO";
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