// Problem: Mislove Has Lost an Array
// Link to the problem: https://codeforces.com/contest/1204/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, l, r;
    cin >> n >> l >> r;
    const ll x = (1 << l) - 1 + (n - l), y = (1 << r) - 1 + (n - r) * (1 << (r - 1));
    cout << x << " " << y << endl;
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