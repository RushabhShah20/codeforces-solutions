// Problem: Sum of Digits
// Link to the problem: https://codeforces.com/contest/102/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    while (s.size() > 1)
    {
        ll sum = 0;
        for (const char c : s)
        {
            sum += (c - '0');
        }
        s = to_string(sum);
        ans++;
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