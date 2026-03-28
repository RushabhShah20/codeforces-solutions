// Problem: Image
// Link to the problem: https://codeforces.com/contest/1721/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    unordered_set<char> a;
    for (ll i = 0; i < 2; i++)
    {
        a.insert(s[i]);
        a.insert(t[i]);
    }
    const ll ans = a.size() - 1;
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