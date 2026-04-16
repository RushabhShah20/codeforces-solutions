// Problem: Petya and His Friends
// Link to the problem: https://codeforces.com/contest/66/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 2)
    {
        cout << -1 << endl;
        return;
    }
    cout << 10 << endl;
    cout << 15 << endl;
    for (ll i = 1; i <= n - 2; i++)
    {
        cout << 6 * i << endl;
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