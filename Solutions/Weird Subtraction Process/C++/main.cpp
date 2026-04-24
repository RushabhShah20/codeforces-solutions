// Problem: Weird Subtraction Process
// Link to the problem: https://codeforces.com/contest/946/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    while (a > 0 && b > 0)
    {
        if (a >= 2 * b)
        {
            a %= 2 * b;
        }
        else if (b >= 2 * a)
        {
            b %= 2 * a;
        }
        else
        {
            break;
        }
    }
    cout << a << " " << b << endl;
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