// Problem: Large Addition
// Link to the problem: https://codeforces.com/contest/1984/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] == '0')
        {
            cout << "NO" << endl;
            return;
        }
    }
    const string ans = s[0] != '1' || s[n - 1] == '9' ? "NO" : "YES";
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