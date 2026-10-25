// Problem: Single Wildcard Pattern Matching
// Link to the problem: https://codeforces.com/contest/1023/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '*')
        {
            j = i;
            break;
        }
    }
    if (j == -1)
    {
        const string ans = s == t ? "YES" : "NO";
        cout << ans << endl;
        return;
    }
    if (m < n - 1)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 0; i < j; i++)
    {
        if (s[i] != t[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (ll i = 1; i < n - j; i++)
    {
        if (s[n - i] != t[m - i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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