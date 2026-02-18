// Problem: ICPC Balloons
// Link to the problem: https://codeforces.com/contest/1703/problem/B
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
    unordered_set<char> u;
    ll ans = 0;
    for (const char c : s)
    {
        if (u.find(c) == u.end())
        {
            ans += 2;
            u.insert(c);
        }
        else
        {
            ans++;
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