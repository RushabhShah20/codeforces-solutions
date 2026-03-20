// Problem: Typical Interview Problem
// Link to the problem: https://codeforces.com/contest/1796/problem/A
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
    string t;
    for (ll i = 1; i <= 100; i++)
    {
        if (i % 3 == 0)
        {
            t += 'F';
        }
        if (i % 5 == 0)
        {
            t += 'B';
        }
    }
    if (t.find(s) == string::npos)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
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