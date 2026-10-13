// Problem: Traffic Light
// Link to the problem: https://codeforces.com/contest/1744/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    s += s;
    ll ans = 0, j = -1;
    for (ll i = 2 * n - 1; i >= 0; i--)
    {
        if (s[i] == 'g')
        {
            j = i;
        }
        if (s[i] == c && j != -1)
        {
            ans = max(ans, j - i);
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