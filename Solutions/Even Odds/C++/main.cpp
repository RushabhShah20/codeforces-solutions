// Problem: Even Odds
// Link to the problem: https://codeforces.com/contest/318/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k <= (n + 1) / 2)
    {
        cout << 2 * k - 1 << endl;
    }
    else
    {
        k -= (n + 1) / 2;
        cout << (2 * k) << endl;
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