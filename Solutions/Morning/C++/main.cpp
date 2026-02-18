// Problem: Morning
// Link to the problem: https://codeforces.com/contest/1883/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char p = '1';
    ll ans = 0;
    for (const char c : s)
    {
        if (p != c)
        {
            if (p == '0' || c == '0')
            {
                ans += (10 - abs((p - '0') - (c - '0')));
            }
            else
            {
                ans += abs((p - '0') - (c - '0'));
            }
            p = c;
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}