// Problem: Li Hua and Maze
// Link to the problem: https://codeforces.com/contest/1797/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isCorner(const ll x, const ll y, const ll n, const ll m)
{
    return (x == 1 || x == n) && (y == 1 || y == m);
}

bool isEdge(const ll x, const ll y, const ll n, const ll m)
{
    return x == 1 || x == n || y == 1 || y == m;
}

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
    if (isCorner(x1, y1, n, m) || isCorner(x2, y2, n, m))
    {
        cout << 2 << endl;
        return;
    }
    if (isEdge(x1, y1, n, m) || isEdge(x2, y2, n, m))
    {
        cout << 3 << endl;
        return;
    }
    cout << 4 << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}