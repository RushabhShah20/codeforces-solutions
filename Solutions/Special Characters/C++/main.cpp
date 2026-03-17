// Problem: Special Characters
// Link to the problem: https://codeforces.com/contest/1948/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n / 2; i++)
        {
            if (i % 2 == 0)
            {
                cout << "AA";
            }
            else
            {
                cout << "BB";
            }
        }
        cout << endl;
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