// Problem: Food on the Plane
// Link to the problem: https://codeforces.com/contest/725/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size(), x = stoll(s.substr(0, n - 1));
    const char c = s[n - 1];
    unordered_map<char, ll> m = {{'f', 1}, {'e', 2}, {'d', 3}, {'a', 4}, {'b', 5}, {'c', 6}};
    const ll ans = (x - 1) / 4 * 16 + ((x - 1) % 4 & 1 ? 7 : 0) + m[c];
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