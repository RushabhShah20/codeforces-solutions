// Problem: Binary Decimal
// Link to the problem: https://codeforces.com/contest/1530/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const size_t n = s.size();
    int ans = 0;
    for (size_t i = 0; i < n; i++)
    {
        ans = max(ans, s[i] - '0');
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}