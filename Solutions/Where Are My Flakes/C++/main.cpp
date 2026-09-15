// Problem: Where Are My Flakes?
// Link to the problem: https://codeforces.com/contest/60/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll l = 1, r = n;
    string s;
    getline(cin, s);
    for (ll i = 0; i < m; i++)
    {
        getline(cin, s);
        if (s[7] == 'l')
        {
            r = min(r, stoll(s.substr(15)) - 1);
        }
        else
        {
            l = max(l, stoll(s.substr(16)) + 1);
        }
    }
    const ll ans = l > r ? -1 : r - l + 1;
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