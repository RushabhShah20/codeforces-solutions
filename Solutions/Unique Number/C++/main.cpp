// Problem: Unique Number
// Link to the problem: https://codeforces.com/contest/1462/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x;
    cin >> x;
    if (x > 45)
    {
        cout << -1 << endl;
        return;
    }
    string ans;
    ll y = 9;
    while (x > 0)
    {
        ans.insert(0, 1, min(x, y) + '0');
        x -= y;
        y--;
    }
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