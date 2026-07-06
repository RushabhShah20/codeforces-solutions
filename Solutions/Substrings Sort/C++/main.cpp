// Problem: Substrings Sort
// Link to the problem: https://codeforces.com/contest/988/problem/B
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
    sort(s.begin(), s.end(), [](const string &a, const string &b)
         { return a.size() == b.size() ? a < b : a.size() < b.size(); });
    for (ll i = 1; i < n; i++)
    {
        if (s[i].find(s[i - 1]) == string::npos)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << s[i] << endl;
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