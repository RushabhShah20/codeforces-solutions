// Problem: Card Game
// Link to the problem: https://codeforces.com/contest/106/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char c;
    string s, t;
    cin >> c >> s >> t;
    unordered_map<char, int> m = {{'6', 6}, {'7', 7}, {'8', 8}, {'9', 9}, {'T', 10}, {'J', 11}, {'Q', 12}, {'K', 13}, {'A', 14}};
    const string ans = s[1] == c ? (t[1] == c ? (m[s[0]] > m[t[0]] ? "YES" : "NO") : ("YES")) : (t[1] == c ? "NO" : (s[1] == t[1] ? (m[s[0]] > m[t[0]] ? "YES" : "NO") : "NO"));
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