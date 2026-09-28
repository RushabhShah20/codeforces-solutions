// Problem: Don't Try to Count
// Link to the problem: https://codeforces.com/contest/1881/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    ll ans = -1;
    for (ll i = 0; i < 6; i++)
    {
        if (x.find(s) != string::npos)
        {
            ans = i;
            break;
        }
        x += x;
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