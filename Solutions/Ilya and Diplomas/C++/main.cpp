// Problem: Ilya and Diplomas
// Link to the problem: https://codeforces.com/contest/557/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, mn1, mx1, mn2, mx2, mn3, mx3;
    cin >> n >> mn1 >> mx1 >> mn2 >> mx2 >> mn3 >> mx3;
    const ll x1 = min(mx1, n - mn2 - mn3);
    n -= x1;
    const ll x2 = min(mx2, n - mn3);
    n -= x2;
    const ll x3 = n;
    cout << x1 << " " << x2 << " " << x3 << endl;
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