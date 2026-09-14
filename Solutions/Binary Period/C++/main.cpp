// Problem: Binary Period
// Link to the problem: https://codeforces.com/contest/1342/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = false, y = false;
    for (ll i = 0; i < n; i++)
    {
        s[i] == '0' ? x = true : y = true;
    }
    if (!x || !y)
    {
        cout << s << endl;
    }
    else
    {
        for (ll i = 0; i < n; i++)
        {
            cout << "10";
        }
        cout << endl;
    }
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