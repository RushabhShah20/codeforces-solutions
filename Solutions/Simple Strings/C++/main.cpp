// Problem: Simple Strings
// Link to the problem: https://codeforces.com/contest/665/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            s[i] = (s[i - 1] - 'a' + 1) % 26 + 'a';
            if (i < n - 1 && s[i] == s[i + 1])
            {
                s[i] = (s[i] - 'a' + 1) % 26 + 'a';
            }
        }
    }
    cout << s << endl;
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