// Problem: Two Screens
// Link to the problem: https://codeforces.com/contest/2025/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    ll i = 0, j = 0;
    while (i < n && j < m)
    {
        if (s[i] == t[j])
        {
            i++;
            j++;
        }
        else
        {
            break;
        }
    }
    const ll ans = n + m - (min(i, j) == 0 ? 0 : min(i, j) - 1);
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