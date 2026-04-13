// Problem: Neverending competitions
// Link to the problem: https://codeforces.com/contest/765/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string t;
    cin >> t;
    unordered_map<string, ll> m, p;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        m[s.substr(0, 3)]++;
        p[s.substr(5, 3)]++;
    }
    if (m[t] == p[t])
    {
        cout << "home" << endl;
    }
    else
    {
        cout << "contest" << endl;
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