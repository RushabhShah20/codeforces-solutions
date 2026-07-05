// Problem: High School: Become Human
// Link to the problem: https://codeforces.com/contest/987/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    if (x == 1)
    {
        if (y == 1)
        {
            cout << '=' << endl;
        }
        else
        {
            cout << '<' << endl;
        }
        return;
    }
    if (y == 1)
    {
        if (x == 1)
        {
            cout << '=' << endl;
        }
        else
        {
            cout << '>' << endl;
        }
        return;
    }
    if (x == 2 && y == 3)
    {
        cout << '<' << endl;
        return;
    }
    if (x == 3 && y == 2)
    {
        cout << '>' << endl;
        return;
    }
    if ((x == 2 && y == 4) || (x == 4 && y == 2))
    {
        cout << '=' << endl;
        return;
    }
    const char ans = x > y ? '<' : (x < y ? '>' : '=');
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