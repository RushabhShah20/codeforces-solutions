// Problem: Funky Numbers
// Link to the problem: https://codeforces.com/contest/192/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool checkTriangular(const ll n)
{
    const ll x = 8 * n + 1, y = sqrtl(x);
    return y * y == x;
}

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 1; i * (i + 1) / 2 < n; i++)
    {
        if (checkTriangular(n - (i * (i + 1) / 2)))
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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