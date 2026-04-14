// Problem: New Year and Counting Cards
// Link to the problem: https://codeforces.com/contest/908/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll ans = 0;
    for (const char c : s)
    {
        if (isdigit(c))
        {
            if (c - '0' & 1)
            {
                ans++;
            }
        }
        else
        {
            if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            {
                ans++;
            }
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