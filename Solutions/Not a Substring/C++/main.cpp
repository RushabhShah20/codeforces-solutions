// Problem: Not a Substring
// Link to the problem: https://codeforces.com/contest/1860/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    if (s == "()")
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    string x, y;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        x.append("()");
        y.append(1, '(');
    }
    for (ll i = 0; i < n; i++)
    {
        y.append(1, ')');
    }
    const string ans = x.find(s) == string::npos ? x : y;
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