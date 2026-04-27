// Problem: Make Even
// Link to the problem: https://codeforces.com/contest/1611/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        if (!(s[i] - '0' & 1))
        {
            x = true;
            break;
        }
    }
    if (x)
    {
        if (!(s.back() - '0' & 1))
        {
            cout << 0 << endl;
        }
        else if (!(s.front() - '0' & 1))
        {
            cout << 1 << endl;
        }
        else
        {
            cout << 2 << endl;
        }
    }
    else
    {
        cout << -1 << endl;
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