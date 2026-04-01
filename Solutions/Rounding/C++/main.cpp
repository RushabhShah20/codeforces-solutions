// Problem: Rounding
// Link to the problem: https://codeforces.com/contest/898/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 10 < 5)
    {
        n -= n % 10;
    }
    else
    {
        n += 10 - n % 10;
    }
    cout << n << endl;
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