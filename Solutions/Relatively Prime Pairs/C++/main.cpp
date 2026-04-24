// Problem: Relatively Prime Pairs
// Link to the problem: https://codeforces.com/contest/1051/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r;
    cin >> l >> r;
    cout << "YES" << endl;
    while (l <= r)
    {
        cout << l << " " << l + 1 << endl;
        l += 2;
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