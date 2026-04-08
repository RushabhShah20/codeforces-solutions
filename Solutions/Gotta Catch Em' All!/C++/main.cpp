// Problem: Gotta Catch Em' All!
// Link to the problem: https://codeforces.com/contest/757/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_map<char, int> m;
    for (const char c : s)
    {
        m[c]++;
    }
    const ll ans = min({m['B'], m['u'] / 2, m['l'], m['b'], m['a'] / 2, m['s'], m['r']});
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