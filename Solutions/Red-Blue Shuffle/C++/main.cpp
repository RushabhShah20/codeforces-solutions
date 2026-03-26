// Problem: Red-Blue Shuffle
// Link to the problem: https://codeforces.com/contest/1459/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string r, b;
    cin >> r >> b;
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (r[i] > b[i])
        {
            x++;
        }
        else if (r[i] < b[i])
        {
            y++;
        }
    }
    if (x > y)
    {
        cout << "RED" << endl;
    }
    else if (x < y)
    {
        cout << "BLUE" << endl;
    }
    else
    {
        cout << "EQUAL" << endl;
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