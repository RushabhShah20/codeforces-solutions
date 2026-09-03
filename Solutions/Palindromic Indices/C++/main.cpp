// Problem: Palindromic Indices
// Link to the problem: https://codeforces.com/contest/1682/problem/A
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
    vector<pair<char, ll>> a;
    ll x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == s[i - 1])
        {
            x++;
        }
        else
        {
            a.push_back({s[i - 1], x});
            x = 1;
        }
    }
    a.push_back({s[n - 1], x});
    const ll m = a.size(), ans = a[m / 2].second;
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