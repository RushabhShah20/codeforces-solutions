// Problem: Night at the Museum
// Link to the problem: https://codeforces.com/contest/731/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char x = 'a';
    ll ans = 0;
    for (const char c : s)
    {
        ans += min(abs(c - x), 26 - abs(x - c));
        x = c;
    }
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