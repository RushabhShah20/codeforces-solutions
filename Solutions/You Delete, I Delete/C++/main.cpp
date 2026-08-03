// Problem: You Delete, I Delete
// Link to the problem: https://codeforces.com/contest/2248/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            s.erase(i, 1);
            break;
        }
    }
    for (ll i = 0; i < n - 1; i++)
    {
        if (s[i] == '1')
        {
            s.erase(i, 1);
            break;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}