// Problem: Links and Pearls
// Link to the problem: https://codeforces.com/contest/980/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        s[i] == '-' ? x++ : y++;
    }
    if (x == 0 || y == 0)
    {
        cout << "YES" << endl;
        return;
    }
    const string ans = x % y == 0 ? "YES" : "NO";
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