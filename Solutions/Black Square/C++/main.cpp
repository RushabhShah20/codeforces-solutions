// Problem: Black Square
// Link to the problem: https://codeforces.com/contest/431/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a1, a2, a3, a4, ans = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    for (const char c : s)
    {
        if (c == '1')
        {
            ans += a1;
        }
        else if (c == '2')
        {
            ans += a2;
        }
        else if (c == '3')
        {
            ans += a3;
        }
        else
        {
            ans += a4;
        }
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