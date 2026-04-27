// Problem: Bark to Unlock
// Link to the problem: https://codeforces.com/contest/868/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll n;
    cin >> n;
    bool x = false, y = false, z = false;
    for (ll i = 0; i < n; i++)
    {
        string t;
        cin >> t;
        if (s[0] == t[1])
        {
            x = true;
        }
        if (s[1] == t[0])
        {
            y = true;
        }
        if (s == t)
        {
            z = true;
        }
    }
    if ((x && y) || z)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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