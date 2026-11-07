// Problem: Circle Metro
// Link to the problem: https://codeforces.com/contest/1169/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, x, b, y;
    cin >> n >> a >> x >> b >> y;
    a--;
    b--;
    x--;
    y--;
    while (true)
    {
        if (a == b)
        {
            cout << "YES" << endl;
            return;
        }
        if (a == x || b == y)
        {
            break;
        }
        a = (a + 1) % n;
        b = (b - 1 + n) % n;
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