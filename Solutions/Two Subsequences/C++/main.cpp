// Problem: Two Subsequences
// Link to the problem: https://codeforces.com/contest/1602/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char c = 'z';
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        c = min(c, s[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            s.erase(i, 1);
            break;
        }
    }
    cout << c << " " << s << endl;
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