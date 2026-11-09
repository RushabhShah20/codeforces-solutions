// Problem: Digits Sequence (Easy Edition)
// Link to the problem: https://codeforces.com/contest/1177/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    ll x = 1, y = 9, z = 1;
    while (k > x * y)
    {
        k -= x * y;
        x++;
        y *= 10;
        z *= 10;
    }
    const ll a = z + (k - 1) / x;
    const string s = to_string(a);
    const char ans = s[(k - 1) % x];
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