// Problem: Restoring Password
// Link to the problem: https://codeforces.com/contest/94/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_map<string, ll> m;
    for (ll i = 0; i < 10; i++)
    {
        string t;
        cin >> t;
        m[t] = i;
    }
    string ans;
    for (ll i = 0; i < 80; i += 10)
    {
        ans.append(1, '0' + m[s.substr(i, 10)]);
    }
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