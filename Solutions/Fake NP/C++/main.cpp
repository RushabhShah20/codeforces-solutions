// Problem: Fake NP
// Link to the problem: https://codeforces.com/contest/805/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    if (l == r)
    {
        cout << l << endl;
        return;
    }
    if (r - l == 3)
    {
        if (r % 3 == 0 && l % 3 == 0)
        {
            cout << 3 << endl;
            return;
        }
    }
    cout << 2 << endl;
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