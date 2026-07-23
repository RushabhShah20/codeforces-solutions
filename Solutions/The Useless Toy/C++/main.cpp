// Problem: The Useless Toy
// Link to the problem: https://codeforces.com/contest/834/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char a, b;
    cin >> a >> b;
    ll n;
    cin >> n;
    unordered_map<char, ll> m = {{'v', 0}, {'<', 1}, {'^', 2}, {'>', 3}};
    n %= 4;
    const bool x = (m[a] + n) % 4 == m[b], y = (m[a] + (4 - n)) % 4 == m[b];
    const string ans = x && y ? "undefined" : (x ? "cw" : "ccw");
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