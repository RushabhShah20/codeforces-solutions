// Problem: Split it!
// Link to the problem: https://codeforces.com/contest/1496/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    bool x = true;
    for (ll i = 0; i < k; i++)
    {
        if (s[i] != s[n - 1 - i])
        {
            x = false;
            break;
        }
    }
    const string ans = x && k << 1 < n ? "YES" : "NO";
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