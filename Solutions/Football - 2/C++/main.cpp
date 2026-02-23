// Problem: Football
// Link to the problem: https://codeforces.com/contest/43/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<string, ll> m;
    map<ll, string> p;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s]++;
    }
    for (const pair<string, ll> i : m)
    {
        p[i.second] = i.first;
    }
    const string ans = p.rbegin()->second;
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