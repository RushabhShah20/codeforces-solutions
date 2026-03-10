// Problem: The New Year: Meeting Friends
// Link to the problem: https://codeforces.com/contest/723/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    const ll ans = min({abs(x2 - x1) + abs(x3 - x1), abs(x1 - x2) + abs(x3 - x2), abs(x1 - x3) + abs(x2 - x3)});
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