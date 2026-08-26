// Problem: Ksenia and Pan Scales
// Link to the problem: https://codeforces.com/contest/382/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    if (n + m - 1 & 1)
    {
        cout << "Impossible" << endl;
        return;
    }
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '|')
        {
            j = i;
            break;
        }
    }
    const ll x = j, y = n - 1 - j, z = abs(x - y);
    if (z > m)
    {
        cout << "Impossible" << endl;
        return;
    }
    if (x > y)
    {
        s.append(t.substr(0, z));
    }
    else if (x < y)
    {
        s.insert(0, t.substr(0, z));
    }
    for (ll i = z; i < m; i++)
    {
        i & 1 ? s.insert(0, 1, t[i]) : s.append(1, t[i]);
    }
    cout << s << endl;
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