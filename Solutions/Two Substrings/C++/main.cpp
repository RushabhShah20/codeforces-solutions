// Problem: Two Substrings
// Link to the problem: https://codeforces.com/contest/550/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = false, y = false;
    ll j = n + 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i - 1] == 'A' && s[i] == 'B')
        {
            j = i;
            break;
        }
    }
    for (ll i = j + 1; i < n - 1; i++)
    {
        if (s[i] == 'B' && s[i + 1] == 'A')
        {
            x = true;
            break;
        }
    }
    ll k = n + 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i - 1] == 'B' && s[i] == 'A')
        {
            k = i;
            break;
        }
    }
    for (ll i = k + 1; i < n - 1; i++)
    {
        if (s[i] == 'A' && s[i + 1] == 'B')
        {
            y = true;
            break;
        }
    }
    const string ans = x || y ? "YES" : "NO";
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