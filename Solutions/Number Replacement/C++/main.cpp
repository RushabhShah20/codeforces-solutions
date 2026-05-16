// Problem: Number Replacement
// Link to the problem: https://codeforces.com/contest/1744/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    string s;
    cin >> s;
    unordered_map<ll, unordered_set<char>> m;
    for (ll i = 0; i < n; i++)
    {
        m[a[i]].insert(s[i]);
    }
    for (const pair<ll, unordered_set<char>> i : m)
    {
        if (i.second.size() > 1)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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