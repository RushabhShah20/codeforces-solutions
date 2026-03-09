// Problem: Petya and Strings
// Link to the problem: https://codeforces.com/contest/112/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        const ll x = (tolower(s[i]) - 'a'), y = (tolower(t[i]) - 'a');
        if (x > y)
        {
            cout << 1 << endl;
            return;
        }
        if (x < y)
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << 0 << endl;
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