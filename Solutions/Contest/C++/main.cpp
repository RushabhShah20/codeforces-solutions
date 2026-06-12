// Problem: Contest
// Link to the problem: https://codeforces.com/contest/501/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    const ll x = max(3 * a / 10, a - a / 250 * c), y = max(3 * b / 10, b - b / 250 * d);
    const string ans = x > y ? "Misha" : (x < y ? "Vasya" : "Tie");
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