// Problem: Checking the Calendar
// Link to the problem: https://codeforces.com/contest/724/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    unordered_map<string, ll> m = {{"monday", 0}, {"tuesday", 1}, {"wednesday", 2}, {"thursday", 3}, {"friday", 4}, {"saturday", 5}, {"sunday", 6}};
    string s, t;
    cin >> s >> t;
    const ll x = m[s], y = m[t], z = (y - x + 7) % 7;
    const string ans = z == 0 || z == 2 || z == 3 ? "YES" : "NO";
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