// Problem: Memory and Trident
// Link to the problem: https://codeforces.com/contest/712/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (n & 1)
    {
        cout << -1 << endl;
        return;
    }
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            a++;
        }
        if (s[i] == 'R')
        {
            b++;
        }
        if (s[i] == 'U')
        {
            c++;
        }
        if (s[i] == 'D')
        {
            d++;
        }
    }
    const ll ans = (abs(a - b) + abs(c - d)) >> 1;
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