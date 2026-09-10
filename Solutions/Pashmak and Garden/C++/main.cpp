// Problem: Pashmak and Garden
// Link to the problem: https://codeforces.com/contest/459/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (x1 == x2)
    {
        const ll z = abs(y1 - y2), x3 = x1 + z, x4 = x2 + z;
        cout << x3 << " " << y1 << " " << x4 << " " << y2 << endl;
    }
    else if (y1 == y2)
    {
        const ll z = abs(x1 - x2), y3 = y1 + z, y4 = y2 + z;
        cout << x1 << " " << y3 << " " << x2 << " " << y4 << endl;
    }
    else
    {
        if (abs(x1 - x2) == abs(y1 - y2))
        {
            cout << x1 << " " << y2 << " " << x2 << " " << y1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
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