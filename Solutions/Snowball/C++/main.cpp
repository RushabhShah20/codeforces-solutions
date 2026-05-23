// Problem: Snowball
// Link to the problem: https://codeforces.com/contest/1099/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w, h, u1, d1, u2, d2;
    cin >> w >> h >> u1 >> d1 >> u2 >> d2;
    while (h > 0)
    {
        w += h;
        if (h == d1)
        {
            w = max(0LL, w - u1);
        }
        if (h == d2)
        {
            w = max(0LL, w - u2);
        }
        h--;
    }
    cout << w << endl;
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