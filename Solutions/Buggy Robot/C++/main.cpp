// Problem: Buggy Robot
// Link to the problem: https://codeforces.com/contest/888/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll l = 0, r = 0, u = 0, d = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'L')
        {
            l++;
        }
        if (s[i] == 'R')
        {
            r++;
        }
        if (s[i] == 'U')
        {
            u++;
        }
        if (s[i] == 'D')
        {
            d++;
        }
    }
    const ll ans = 2 * (min(l, r) + min(u, d));
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