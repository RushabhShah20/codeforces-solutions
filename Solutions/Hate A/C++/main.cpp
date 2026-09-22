// Problem: Hate "A"
// Link to the problem: https://codeforces.com/contest/1146/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    string t;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] != 'a')
        {
            t.append(1, s[i]);
        }
    }
    if (t.empty())
    {
        cout << s << endl;
        return;
    }
    const ll m = t.size();
    if (m & 1)
    {
        cout << ":(" << endl;
        return;
    }
    const ll k = m >> 1;
    for (ll i = n - 1; i >= n - k; i--)
    {
        if (s[i] == 'a')
        {
            cout << ":(" << endl;
            return;
        }
    }
    const string ans = t.substr(0, k) == t.substr(k) ? s.substr(0, n - k) : ":(";
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