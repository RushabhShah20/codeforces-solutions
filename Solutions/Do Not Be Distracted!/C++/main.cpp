// Problem: Do Not Be Distracted!
// Link to the problem: https://codeforces.com/contest/1520/problem/A
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
    for (ll i = 1; i < n; i++)
    {
        if (s[i] != s[i - 1])
        {
            if (t.count(s[i]) > 0)
            {
                cout << "NO" << endl;
                return;
            }
            t.insert(s[i - 1]);
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