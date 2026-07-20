// Problem: Cloning Toys
// Link to the problem: https://codeforces.com/contest/922/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll z = x - (y - 1);
    const string ans = ((y > 1 && z >= 0 && !(z & 1)) || (y == 1 && x == 0)) ? "Yes" : "No";
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