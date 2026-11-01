// Problem: Stakes and Shapes
// Link to the problem: https://codeforces.com/contest/2278/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    string ans;
    const char w = x >= y && x >= z ? 'P' : (y >= x && y >= z ? 'R' : 'S');
    ans.append(x + y + z, w);
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