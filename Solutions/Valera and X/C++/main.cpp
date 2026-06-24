// Problem: Valera and X
// Link to the problem: https://codeforces.com/contest/404/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<string> s(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    unordered_set<char> a, b;
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (i == j || i + j == n - 1)
            {
                a.insert(s[i][j]);
            }
            else
            {
                b.insert(s[i][j]);
            }
        }
    }
    const string ans = a.size() == 1 && b.size() == 1 && *a.begin() != *b.begin() ? "YES" : "NO";
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