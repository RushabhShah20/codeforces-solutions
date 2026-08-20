// Problem: Radio Station
// Link to the problem: https://codeforces.com/contest/918/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    unordered_map<string, string> k;
    for (ll i = 0; i < n; i++)
    {
        string s, t;
        cin >> s >> t;
        k[t] = s;
    }
    for (ll i = 0; i < m; i++)
    {
        string s, t;
        cin >> s >> t;
        t.pop_back();
        cout << s << " " << t << "; #" << k[t] << endl;
    }
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