// Problem: Table Tennis Game 2
// Link to the problem: https://codeforces.com/contest/765/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, a, b;
    cin >> k >> a >> b;
    const ll x = a / k, y = b / k, ans = (a % k != 0 && y == 0) || (b % k != 0 && x == 0) ? -1 : x + y;
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