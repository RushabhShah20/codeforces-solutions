// Problem: Colorful Stones (Simplified Edition)
// Link to the problem: https://codeforces.com/contest/265/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    ll j = 0;
    for (ll i = 0; i < m; i++)
    {
        if (t[i] == s[j])
        {
            j++;
        }
        if (j == n - 1)
        {
            break;
        }
    }
    const ll ans = j + 1;
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