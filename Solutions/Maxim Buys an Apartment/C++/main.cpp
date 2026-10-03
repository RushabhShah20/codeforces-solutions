// Problem: Maxim Buys an Apartment
// Link to the problem: https://codeforces.com/contest/854/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll x = k == 0 || k == n ? 0 : 1, y = k == 0 || k == n ? 0 : min(n - k, k << 1);
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