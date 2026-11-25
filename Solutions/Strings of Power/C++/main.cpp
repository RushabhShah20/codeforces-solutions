// Problem: Strings of Power
// Link to the problem: https://codeforces.com/contest/318/problem/B
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
    for (ll i = 0; i < n - 4; i++)
    {
        if (s.substr(i, 5) == "heavy")
        {
            x++;
        }
        if (s.substr(i, 5) == "metal")
        {
            ans += x;
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
    solve();
    return 0;
}