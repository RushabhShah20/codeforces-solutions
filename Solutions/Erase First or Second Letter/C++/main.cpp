// Problem: Erase First or Second Letter
// Link to the problem: https://codeforces.com/contest/1917/problem/B
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
    unordered_set<char> t;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        t.insert(s[i]);
        ans += t.size();
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