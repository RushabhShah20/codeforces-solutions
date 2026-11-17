// Problem: Bus Game
// Link to the problem: https://codeforces.com/contest/79/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    bool z = true;
    while (true)
    {
        if (z)
        {
            if (x >= 2 && y >= 2)
            {
                x -= 2;
                y -= 2;
            }
            else if (x >= 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
            }
            else if (y >= 22)
            {
                y -= 22;
            }
            else
            {
                cout << "Hanako" << endl;
                return;
            }
        }
        else
        {
            if (y >= 22)
            {
                y -= 22;
            }
            else if (x >= 1 && y >= 12)
            {
                x -= 1;
                y -= 12;
            }
            else if (x >= 2 && y >= 2)
            {
                x -= 2;
                y -= 2;
            }
            else
            {
                cout << "Ciel" << endl;
                return;
            }
        }
        z = !z;
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