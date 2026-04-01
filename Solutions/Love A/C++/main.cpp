// Problem: Love "A"
// Link to the problem: https://codeforces.com/contest/1146/problem/A
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
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'a')
        {
            x++;
        }
    }
    const ll ans = min(2 * x - 1, n);
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