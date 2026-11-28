// Problem: Random Teams
// Link to the problem: https://codeforces.com/contest/478/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll a = n / m, b = n % m;
    const ll x = b * ((a * (a + 1)) >> 1) + (m - b) * ((a * (a - 1)) >> 1), y = ((n - m + 1) * (n - m)) >> 1;
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