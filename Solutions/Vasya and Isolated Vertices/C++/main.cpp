// Problem: Vasya and Isolated Vertices
// Link to the problem: https://codeforces.com/contest/1065/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    const ll x = max(0LL, n - 2 * m);
    ll y = 0, l = 0, r = n * (n - 1) / 2;
    while (l <= r)
    {
        const ll k = l + (r - l) / 2;
        if (k * (k - 1) / 2 >= m)
        {
            y = n - k;
            r = k - 1;
        }
        else
        {
            l = k + 1;
        }
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