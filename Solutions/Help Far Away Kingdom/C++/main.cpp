// Problem: Help Far Away Kingdom
// Link to the problem: https://codeforces.com/contest/99/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll j = s.find('.');
    string t = s.substr(0, j);
    if (t.back() == '9')
    {
        cout << "GOTO Vasilisa." << endl;
        return;
    }
    ll x = s[j + 1] >= '5' ? 1 : 0;
    for (ll i = j - 1; i >= 0; i--)
    {
        const ll y = s[i] - '0' + x;
        t[i] = '0' + y % 10;
        x = y / 10;
    }
    if (x > 0)
    {
        t.insert(0, 1, '1');
    }
    const string ans = t;
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