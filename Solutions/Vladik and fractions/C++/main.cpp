// Problem: Vladik and fractions
// Link to the problem: https://codeforces.com/contest/743/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 1)
    {
        cout << -1 << endl;
        return;
    }
    const ll x = n, y = x + 1, z = x * y;
    cout << x << " " << y << " " << z << endl;
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