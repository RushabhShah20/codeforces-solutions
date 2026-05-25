// Problem: Strong Password
// Link to the problem: https://codeforces.com/contest/1997/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = false;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            const char c = s[i] == 'z' ? 'a' : s[i] + 1;
            s.insert(i, 1, c);
            x = true;
            break;
        }
    }
    if (!x)
    {
        const char c = s[0] == 'z' ? 'a' : s[0] + 1;
        s.insert(0, 1, c);
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}