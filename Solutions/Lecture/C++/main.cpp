// Problem: Lecture
// Link to the problem: https://codeforces.com/contest/499/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    unordered_map<string, string> m;
    for (ll i = 0; i < k; i++)
    {
        string s, t;
        cin >> s >> t;
        m[s] = t;
    }
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        cout << (s.size() <= m[s].size() ? s : m[s]) << " ";
    }
    cout << endl;
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