// Problem: Primary Task
// Link to the problem: https://codeforces.com/contest/2000/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    if (n <= 2)
    {
        cout << "NO" << endl;
        return;
    }
    if (s.substr(0, 2) == "10")
    {
        if (n == 3)
        {
            if (s[2] == '0' || s[2] == '1')
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
        else
        {
            if (s[2] == '0')
            {
                cout << "NO" << endl;
            }
            else
            {
                cout << "YES" << endl;
            }
        }
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}