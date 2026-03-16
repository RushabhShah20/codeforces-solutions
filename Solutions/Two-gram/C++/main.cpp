// Problem: Two-gram
// Link to the problem: https://codeforces.com/contest/977/problem/B
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
    unordered_map<string, ll> m;
    for (ll i = 0; i < n - 1; i++)
    {
        m[s.substr(i, 2)]++;
    }
    ll x = 0;
    for (const pair<string, ll> i : m)
    {
        x = max(x, i.second);
    }
    for (const pair<string, ll> i : m)
    {
        if (i.second == x)
        {
            cout << i.first << endl;
            return;
        }
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