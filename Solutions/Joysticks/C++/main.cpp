// Problem: Joysticks
// Link to the problem: https://codeforces.com/contest/651/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 0;
    while (a > 0 && b > 0)
    {
        if (a == 1 && b == 1)
        {
            break;
        }
        if (a >= b)
        {
            b += 1;
            a -= 2;
        }
        else
        {
            a += 1;
            b -= 2;
        }
        ans++;
    }
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