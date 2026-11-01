// Problem: Down with Brackets
// Link to the problem: https://codeforces.com/contest/2110/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0;
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i] == '(')
        {
            x++;
        }
        else
        {
            x--;
        }
        if (x < 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    const string ans = x == 0 ? "NO" : "YES";
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