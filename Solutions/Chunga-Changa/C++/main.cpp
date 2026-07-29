// Problem: Chunga-Changa
// Link to the problem: https://codeforces.com/contest/1181/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y, z;
    cin >> x >> y >> z;
    const ll a = (x + y) / z, b = (x % z + y % z < z) ? 0 : z - max(x % z, y % z);
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