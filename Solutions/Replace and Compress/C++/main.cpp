// Problem: Replace and Compress
// Link to the problem: https://codeforces.com/contest/2276/problem/B
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
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == s[i + 1])
        {
            if (s[i] == s[i - 1])
            {
                x = true;
            }
            else
            {
                y = true;
            }
        }
    }
    const ll ans = 1 + x + y;
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