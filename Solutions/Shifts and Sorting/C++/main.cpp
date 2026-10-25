// Problem: Shifts and Sorting
// Link to the problem: https://codeforces.com/contest/1969/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0, x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            x++;
        }
        else
        {
            if (x > 0)
            {
                ans += x + 1;
            }
        }
    }
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