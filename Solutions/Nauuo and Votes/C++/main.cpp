// Problem: Nauuo and Votes
// Link to the problem: https://codeforces.com/contest/1173/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    if (abs(x - y) > z)
    {
        if (x > y)
        {
            cout << "+" << endl;
        }
        else if (x < y)
        {
            cout << "-" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    else if (abs(x - y) == 0 && z == 0)
    {
        cout << "0" << endl;
    }
    else
    {
        cout << "?" << endl;
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