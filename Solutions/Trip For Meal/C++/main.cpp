// Problem: Trip For Meal
// Link to the problem: https://codeforces.com/contest/876/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, c;
    cin >> n >> a >> b >> c;
    if (n == 1)
    {
        cout << 0 << endl;
        return;
    }
    const ll x = min({a, b, c}), ans = x == a ? (n - 1) * a : (x == b ? min(a, b) + (n - 2) * b : min(a, b) + (n - 2) * c);
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