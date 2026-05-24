// Problem: A Variety of Operations
// Link to the problem: https://codeforces.com/contest/1556/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if (a == b)
    {
        const ll ans = a == 0 ? 0 : 1;
        cout << ans << endl;
    }
    else
    {
        const ll ans = abs(a - b) & 1 ? -1 : 2;
        cout << ans << endl;
    }
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