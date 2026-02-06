// Problem: Vanya and Cubes
// Link to the problem: https://codeforces.com/contest/492/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 0, i = 0, j = 1;
    cin >> n;
    while (i + j * (j + 1) / 2 <= n)
    {
        i += j * (j + 1) / 2;
        ans++;
        j++;
    }
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    solve();
    return 0;
}