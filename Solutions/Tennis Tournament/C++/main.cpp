// Problem: Tennis Tournament
// Link to the problem: https://codeforces.com/contest/628/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    const ll y = b * n;
    ll x = 0;
    while (n > 1)
    {
        const ll c = (n & (n - 1)) == 0 ? log2(n) : log2(n) - 1, d = 1LL << c, e = d >> 1;
        x += e * (a * 2 + 1);
        n -= e;
    }
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