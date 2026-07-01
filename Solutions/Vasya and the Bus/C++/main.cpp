// Problem: Vasya and the Bus
// Link to the problem: https://codeforces.com/contest/190/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    if (n == 0)
    {
        if (m == 0)
        {
            cout << "0 0" << endl;
        }
        else
        {
            cout << "Impossible" << endl;
        }
        return;
    }
    const ll x = max(n, m), y = n + max(0LL, m - 1);
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