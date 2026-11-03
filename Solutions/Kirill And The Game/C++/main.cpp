// Problem: Kirill And The Game
// Link to the problem: https://codeforces.com/contest/842/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, x, y, k;
    cin >> l >> r >> x >> y >> k;
    for (ll b = x; b <= y; b++)
    {
        const ll a = k * b;
        if (a >= l && a <= r)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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