// Problem: Equation
// Link to the problem: https://codeforces.com/contest/20/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    long double a, b, c;
    cin >> a >> b >> c;
    cout << fixed << setprecision(10);
    if (a == 0)
    {
        if (b == 0)
        {
            if (c == 0)
            {
                cout << -1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << 1 << endl;
            const long double ans = -c / b;
            cout << ans << endl;
        }
        return;
    }
    const long double d = b * b - 4 * a * c, x = (-b + sqrtl(d)) / (2 * a), y = (-b - sqrtl(d)) / (2 * a);
    if (d < 0)
    {
        cout << 0 << endl;
    }
    else if (d == 0)
    {
        cout << 1 << endl;
        cout << x << endl;
    }
    else
    {
        cout << 2 << endl;
        cout << min(x, y) << endl;
        cout << max(x, y) << endl;
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